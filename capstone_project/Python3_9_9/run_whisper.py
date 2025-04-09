import os
import whisper

with open("test_output.log", "w", encoding="utf-8") as f:
    f.write("Hello from Python!\n")
    f.write("Current working dir: " + os.getcwd() + "\n")

# FFmpeg 경로 추가
os.environ["PATH"] += os.pathsep + os.path.abspath(os.path.dirname(__file__))

print("[DEBUG] Whisper")

model = whisper.load_model("base")

audio_path = os.path.join(os.path.dirname(__file__), "Saved", "TestWav.wav")

if not os.path.exists(audio_path):
    print("[ERROR] 파일이 존재하지 않습니다:", audio_path)
    exit()

result = model.transcribe(audio_path, language="ko")
print("[RESULT]", result["text"])

# 결과 저장 폴더 만들기
transcript_dir = os.path.join(os.path.dirname(audio_path), "Transcripts")
os.makedirs(transcript_dir, exist_ok=True)

# 텍스트 저장
output_path = os.path.join(transcript_dir, "result.txt")
with open(output_path, "w", encoding="utf-8") as f:
    f.write(result["text"])

print("[SAVED]", output_path)


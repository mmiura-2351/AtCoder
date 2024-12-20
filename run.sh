#!/bin/bash

# 入力ファイルを指定
input_file="input.txt"
expected_output_file="output.txt"
actual_output_file="actual_output.txt"

# プログラムを実行し、出力をファイルに保存
./program < "$input_file" > "$actual_output_file"

# 最後の改行を無視する
# if diff -q -Z "$expected_output_file" "$actual_output_file"; then
# 出力を比較
if diff -q "$expected_output_file" "$actual_output_file"; then
  echo "PASS TEST"
else
  echo "FAIL TEST"
  echo -n "EXPECT: "
  cat "$expected_output_file"
  echo ""
  echo -n "ACTUAL: "
  cat "$actual_output_file"
fi
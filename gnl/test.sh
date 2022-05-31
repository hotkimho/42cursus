#!/bin/bash

# �̰Ÿ� ������Ʈ ������ �����ϼ���!
PROJ_PATH=./

# ### �ȳ�����
# 1. https://github.com/PandaCoustik/Test-42
# �� �����ִ� gnl �׽�Ʈ �� ��Ÿ �׽�Ʈ�鿡 ���Ͽ� �ڵ����� ��������ִ� ��ũ��Ʈ�Դϴ�.
# 2. �� �׽��͸��� �ּ����� ������ �޷�������, �ϳ��� ����� ��°�� �ּ�ó���Ͽ� �׽��� ������ �ǳʶ� �� �ֽ��ϴ�.
# 3. 2021.01.24 �������� �۵�������, ���� ���������� �۵����� ���� �� �ֽ��ϴ�.
# 4. �� �׽�Ʈ�� ���ʽ��� ������ ȯ�濡���� ���۵Ǿ����ϴ�.
# 5. �׽�Ʈ�� ����� �� �׽��͸��� �ٸ��� ��µǹǷ�, ���� �׽��ͱ��� ��ũ��Ʈ�� �ڵ带 Ȯ���Ͽ� ��� ����� �ǹ̰� �������� ���� Ȯ���Ͻô� �� �����ϴ�.

# ### ���ǻ���
# 1. �۵� ȯ�濡 ���� ����ġ ���� ������ �߻��� �� �ֽ��ϴ�.. �ݵ�� git push �صνñ� �ٶ��ϴ�.
# 2. �� ��ũ��Ʈ�� ������Ʈ ���� ���� �׽�Ʈ ������ �����մϴ�.
# 3. �׽�Ʈ �Ϸ��� �׽�Ʈ ����/������ �������� �ʽ��ϴ�.

# ### �뷫���� ��ũ��Ʈ�� ���� ### ---------------------
# 1. �׽�Ʈ�� git clone �մϴ�.
# 2. �׽�Ʈ ������ �� �׽�Ʈ�� �����ϰ� ������ �������ɴϴ�.

# ----------------------------------------
# ###### gitignore �ϸ� ���� �͵� ######
# 42testers-gnl/
# gnl-lover/
# gnlkiller/
# gnlkiller2/
# Test-42/
# gnlTester/
# ----------------------------------------

# ���� ������Ʈ ���� ��ġ�� �̵�
REAL_PATH=$(cd $(dirname $0) && cd ${PROJ_PATH} && pwd)
echo ������Ʈ ��ġ: $REAL_PATH
cd $REAL_PATH

## 42testers-gnl
git clone https://github.com/Mazoise/42TESTERS-GNL.git 42testers-gnl
cd 42testers-gnl
bash all_tests_with_bonus.sh
cd ..

### gnl_lover
### gnlkiller
git clone https://github.com/DontBreakAlex/gnlkiller.git
cd gnlkiller
cp ../get_next_line.c .
cp ../get_next_line_utils.c .
cp ../get_next_line.h .
./run.sh;
cd ..

### gnlkiller2
git clone https://github.com/Sherchryst/gnlkiller.git gnlkiller2
cd gnlkiller2
cp ../get_next_line.c .
cp ../get_next_line_utils.c .
cp ../get_next_line.h .
chmod +x test.sh
./test.sh;
cd ..

### TEST-42
git clone https://github.com/PandaCoustik/Test-42.git
cd Test-42/test_gnl
chmod +x test.sh
./test.sh
cd ../..

### gnlTester (2019+)
git clone https://github.com/Tripouille/gnlTester.git
cd gnlTester
# make m # �ʼ� ��Ʈ�� ����
# make b # ���ʽ� ��Ʈ�� ����
make a # �ʼ��� ���ʽ� ��� ����
cd ..

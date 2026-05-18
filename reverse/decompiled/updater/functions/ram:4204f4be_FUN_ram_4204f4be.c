
void FUN_ram_4204f4be(int *param_1,int param_2)

{
  char cVar1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_ram_420599c2();
  cVar1 = *(char *)((int)param_1 + 0xf);
  *(char *)((int)param_1 + 0xf) = cVar1 + -1;
  if (cVar1 == '\x01') {
    unaff_s2 = param_1[1];
    unaff_s3 = *param_1;
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *param_1 = 0;
  }
  else {
    *(char *)(param_1 + 4) = (char)param_2 + '\x02';
  }
  FUN_ram_420599ec();
  if (cVar1 == '\x01') {
    if (unaff_s2 != 0) {
      if (param_2 == 0) {
        FUN_ram_4205b1de(unaff_s2);
      }
      else {
        FUN_ram_42051d02();
      }
    }
    if (unaff_s3 != 0) {
      FUN_ram_42059e24(unaff_s3);
      return;
    }
  }
  return;
}


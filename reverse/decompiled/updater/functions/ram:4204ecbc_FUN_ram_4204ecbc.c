
void FUN_ram_4204ecbc(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int unaff_s3;
  
  FUN_ram_420599c2();
  cVar1 = *(char *)((int)param_1 + 0xf);
  *(char *)((int)param_1 + 0xf) = cVar1 + -1;
  if ((cVar1 == '\x01') && (*(byte *)(param_1 + 4) != 0)) {
    unaff_s3 = param_1[1];
    iVar4 = *param_1;
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *param_1 = 0;
    bVar3 = *(byte *)(param_1 + 4) & 1;
    bVar2 = true;
  }
  else {
    iVar4 = 0;
    bVar3 = 0;
    bVar2 = false;
  }
  FUN_ram_420599ec();
  if (bVar2) {
    if (unaff_s3 != 0) {
      if (bVar3 == 0) {
        FUN_ram_4205b1de(unaff_s3);
      }
      else {
        FUN_ram_42051d02();
      }
    }
    if (iVar4 != 0) {
      FUN_ram_42059e24(iVar4);
      return;
    }
  }
  return;
}


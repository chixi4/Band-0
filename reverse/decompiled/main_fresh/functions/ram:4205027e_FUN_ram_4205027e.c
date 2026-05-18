
void FUN_ram_4205027e(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int unaff_s3;
  
  if (param_1 != (int *)0x0) goto LAB_ram_42050294;
  do {
    param_1 = (int *)FUN_ram_4039bf1e();
LAB_ram_42050294:
    FUN_ram_4205c96c();
    cVar1 = *(char *)((int)param_1 + 0xf);
  } while (cVar1 == '\0');
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
  FUN_ram_4205c996();
  if (bVar2) {
    if (unaff_s3 != 0) {
      if (bVar3 == 0) {
        FUN_ram_4205e6e8(unaff_s3);
      }
      else {
        FUN_ram_42053ac4();
      }
    }
    if (iVar4 != 0) {
      FUN_ram_4205cdfa(iVar4);
      return;
    }
  }
  return;
}


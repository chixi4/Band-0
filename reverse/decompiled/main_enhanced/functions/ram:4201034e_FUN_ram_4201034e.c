
undefined4 FUN_ram_4201034e(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int *unaff_s3;
  int unaff_s5;
  
  *unaff_s3 = *unaff_s3 + unaff_s1;
  for (iVar1 = unaff_s0 - unaff_s1; 0 < iVar1; iVar1 = iVar1 - iVar2) {
    iVar2 = *unaff_s3;
    bVar4 = (*(code *)&SUB_ram_40010974)();
    pbVar3 = (byte *)(iVar2 / 8 + unaff_s5);
    *pbVar3 = *pbVar3 | bVar4;
    iVar2 = iVar1;
    if (8 < iVar1) {
      iVar2 = 8;
    }
    *unaff_s3 = *unaff_s3 + iVar2;
  }
  return 0;
}


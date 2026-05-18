
undefined4 FUN_ram_4205c6a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_2 < 2) goto LAB_ram_4205c6b8;
  while( true ) {
    uVar2 = FUN_ram_4039bf1e();
LAB_ram_4205c6b8:
    iVar1 = FUN_ram_40397076(1,0,3);
    *(int *)uVar2 = iVar1;
    if (iVar1 == 0) break;
    if (((int)((ulonglong)uVar2 >> 0x20) != 1) ||
       (iVar1 = FUN_ram_40397156(iVar1,0,0,0), iVar1 == 1)) {
      return 0;
    }
  }
  return 0xffffffff;
}


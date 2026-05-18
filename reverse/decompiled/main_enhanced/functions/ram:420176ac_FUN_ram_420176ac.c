
int FUN_ram_420176ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  
  iVar1 = FUN_ram_42049226(param_1,0x20);
  iVar2 = -1;
  if (iVar1 == 0) {
    (*(code *)&SUB_ram_400107fc)();
    iVar1 = FUN_ram_42049226(*(undefined4 *)(unaff_s3 + -0x3c),0);
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}


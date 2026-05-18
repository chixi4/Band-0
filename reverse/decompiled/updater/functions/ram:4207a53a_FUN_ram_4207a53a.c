
undefined4 FUN_ram_4207a53a(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  FUN_ram_40394d60();
  piVar1[2] = 0;
  piVar1[4] = piVar1[4] & 0xfffffffd;
  FUN_ram_40394d8e();
  if (param_1[1] != 0) {
    FUN_ram_420119d4();
    FUN_ram_40394d60();
    FUN_ram_4207b95e(iVar2 + 8,iVar3,0,0xffffffff,0);
    FUN_ram_40397136(iVar2 + 8,piVar1[1],0,0xffffffff);
    FUN_ram_40394d8e();
  }
  thunk_FUN_ram_40390608(param_1);
  FUN_ram_4207a450(piVar1);
  return 0;
}



int FUN_ram_420a554e(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [24];
  
  iVar1 = *(int *)(param_1 + 0x38) + 0x154;
  FUN_ram_4206c48e(auStack_2c);
  uVar2 = FUN_ram_4206c732(iVar1);
  iVar3 = FUN_ram_4206c572(auStack_2c,uVar2,0);
  if (((iVar3 == 0) && (iVar3 = FUN_ram_4206c508(auStack_2c,iVar1), iVar3 == 0)) &&
     (iVar3 = FUN_ram_4206c6a0(auStack_2c,param_2), iVar3 == 0)) {
    FUN_ram_4206c732(iVar1);
    uVar2 = FUN_ram_4206c71c();
    *param_3 = uVar2;
  }
  FUN_ram_4206c49a(auStack_2c);
  return iVar3;
}


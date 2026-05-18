
void FUN_ram_42099a2a(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 + 0xa8;
  iVar3 = param_2 + 0x24;
  FUN_ram_4039c11e(iVar2,iVar3,0x20);
  FUN_ram_4206075c(iVar3,0x20);
  FUN_ram_42099710(param_2 + 0x48,"h head-on.",param_1 + 0x78,iVar2,
                   *(int *)(param_2 + 0x18) * 0x20 + 0x48 + param_2,*(undefined4 *)(param_2 + 0x14))
  ;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = FUN_ram_4209c726(*(undefined4 *)(param_1 + 0x58));
    FUN_ram_4039c11e(iVar2,iVar3,0x20);
    FUN_ram_4206075c(iVar3,0x20);
    FUN_ram_42099710(param_2 + 0x48,&DAT_ram_3c0c4b48,param_1 + 0x78,iVar2,
                     *(int *)(param_2 + 0xf4) * 0x10 + 0x94 + param_2,uVar1);
    return;
  }
  return;
}


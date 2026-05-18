
int FUN_ram_42099782(int param_1,int param_2)

{
  int iVar1;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined1 auStack_44 [6];
  undefined1 auStack_3e [8];
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined1 auStack_30 [36];
  
  iVar1 = FUN_ram_42060348(param_2 + 0x48,0x20);
  if (-1 < iVar1) {
    FUN_ram_4039c11e(auStack_44,param_1 + 0x78,6);
    FUN_ram_42060778(auStack_3e);
    uStack_54 = (undefined2)param_2;
    uStack_36 = uStack_54;
    uStack_52 = (undefined2)((uint)param_2 >> 0x10);
    uStack_34 = uStack_52;
    iVar1 = FUN_ram_42060348(auStack_30,0x20);
    if (-1 < iVar1) {
      iVar1 = FUN_ram_4209cbac(auStack_30,0x20,"Not a day to push head-on.",auStack_44,0x12,
                               param_2 + 0x24);
      return iVar1 >> 0x1f;
    }
  }
  return -1;
}


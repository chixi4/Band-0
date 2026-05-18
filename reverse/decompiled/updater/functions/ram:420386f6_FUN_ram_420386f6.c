
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_420386f6(int param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bStack_28;
  char cStack_27;
  ushort uStack_26;
  uint auStack_24 [3];
  
  bVar2 = false;
  if (DAT_ram_3fcb5145 == '\0') {
    uStack_26 = 0;
    bStack_28 = 0;
    cStack_27 = '\0';
    auStack_24[0] = 0;
    iVar4 = _DAT_ram_3fcb398c + param_1 * 0x34;
    bVar1 = *(byte *)(iVar4 + 0x21);
    if (bVar1 == 2) {
      iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x120))
                        (*(undefined4 *)(*(int *)(gp + -0x2b8) + 0x410),iVar4,&uStack_26,param_4,
                         *(int *)(gp + -0x2b8),*(code **)(_DAT_ram_3fcdfdd8 + 0x120));
      if (((iVar6 != 0) || ((int)(uint)uStack_26 < *(int *)(iVar4 + 0x24))) ||
         ((uint)*(ushort *)(iVar4 + 0x28) < (uint)uStack_26)) {
        uStack_26 = (ushort)*(undefined4 *)(iVar4 + 0x2c);
      }
      uVar3 = (uint)*param_2;
      uVar7 = (uint)uStack_26;
    }
    else {
      if (2 < bVar1) {
        if (1 < (byte)(bVar1 - 6)) {
          return true;
        }
        auStack_24[0] = (uint)*(ushort *)(iVar4 + 0x22);
        iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))();
        if (iVar6 == 0) {
          return true;
        }
        iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x134))
                          (*(undefined4 *)(*(int *)(gp + -0x2b8) + 0x410),iVar4,iVar6,auStack_24,
                           *(int *)(gp + -0x2b8),*(code **)(_DAT_ram_3fcdfdd8 + 0x134));
        if (iVar5 != 0) {
          FUN_ram_40399daa(iVar6,iVar4 + 0x2c,auStack_24[0]);
        }
        iVar4 = FUN_ram_40399d6c(iVar6,param_2,auStack_24[0]);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar6);
        return iVar4 != 0;
      }
      if (bVar1 == 0) {
        iVar6 = *(int *)(gp + -0x2b8);
        iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x118))
                          (*(undefined4 *)(iVar6 + 0x410),iVar4,&bStack_28,0x3fce0000,iVar6,
                           *(code **)(_DAT_ram_3fcdfdd8 + 0x118));
        if (((iVar6 != 0) || ((int)(uint)bStack_28 < *(int *)(iVar4 + 0x24))) ||
           ((uint)*(ushort *)(iVar4 + 0x28) < (uint)bStack_28)) {
          bStack_28 = (byte)*(undefined4 *)(iVar4 + 0x2c);
        }
        uVar3 = (uint)(byte)*param_2;
        uVar7 = (uint)bStack_28;
      }
      else {
        iVar6 = *(int *)(gp + -0x2b8);
        iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x110))
                          (*(undefined4 *)(iVar6 + 0x410),iVar4,&cStack_27,0x3fce0000,iVar6,
                           *(code **)(_DAT_ram_3fcdfdd8 + 0x110));
        if (((iVar6 != 0) || ((int)cStack_27 < *(int *)(iVar4 + 0x24))) ||
           ((int)(uint)*(ushort *)(iVar4 + 0x28) < (int)cStack_27)) {
          cStack_27 = (char)*(undefined4 *)(iVar4 + 0x2c);
        }
        uVar3 = (uint)(char)(byte)*param_2;
        uVar7 = (uint)cStack_27;
      }
    }
    bVar2 = uVar3 != uVar7;
  }
  return bVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42044486(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  
  uVar7 = 0x12;
  if (param_2 == 3) {
    bVar6 = 3;
    if (_DAT_ram_3fcdfe60 < 0xc) {
      bVar6 = 1;
    }
    uVar7 = 0x12;
    if (((byte)param_1[1] <= bVar6) && (uVar2 = (uint)*param_1, uVar2 < 0xf00)) {
      uVar7 = 0x42;
      iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      if (uVar2 < *(byte *)(iVar4 + 0xb)) {
        pbVar3 = *(byte **)(uVar2 * 4 + *(int *)(_DAT_ram_3fcdfedc + 0x14));
        uVar5 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
        bVar6 = *pbVar3;
        if ((bVar6 & 4) == 0) {
          (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))();
        }
        else {
          uVar1 = param_1[1];
          if ((uVar1 & 1) == 0) {
            *pbVar3 = bVar6 | 8;
          }
          else {
            *pbVar3 = bVar6 & 0xf7;
          }
          if (0xb < _DAT_ram_3fcdfe60) {
            if ((uVar1 & 2) == 0) {
              *pbVar3 = *pbVar3 & 0x7f;
            }
            else {
              *pbVar3 = *pbVar3 | 0x80;
            }
          }
          uVar7 = 0;
          (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
          (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5011,0);
        }
      }
    }
  }
  return uVar7;
}


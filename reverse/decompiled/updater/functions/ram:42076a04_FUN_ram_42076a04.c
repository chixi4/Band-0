
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076a04(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  
  uVar1 = _DAT_ram_3fcb0aae;
  (**(code **)(_DAT_ram_3fcb640c + 0x78))();
  uVar1 = uVar1 >> 4;
  (**(code **)(_DAT_ram_3fcb640c + 0x90))(param_2,param_3);
  if (param_4 != 0) {
    pcVar5 = *(code **)(_DAT_ram_3fcb640c + 0x70);
    uVar2 = (**(code **)(_DAT_ram_3fcb640c + 0x74))(1,1);
    (*pcVar5)(1,1,uVar2 | 2);
  }
  if ((uVar1 & 1) != 0) {
    FUN_ram_42076e98(0x3fcb118c,param_4);
  }
  for (uVar4 = 0; uVar4 != param_5; uVar4 = uVar4 + 1 & 0xff) {
    uVar3 = (**(code **)(_DAT_ram_3fcb640c + 0x1c0))(uVar4);
    (**(code **)(_DAT_ram_3fcb640c + 0x70))(1,2,uVar3);
    (*(code *)&SUB_ram_40012598)(param_1);
    if ((uVar1 & 1) != 0) {
      FUN_ram_42076e98(0x3fcb1198,uVar3,*param_1,param_1[1],param_1[2],param_1[3]);
    }
    param_1 = param_1 + 4;
  }
  (**(code **)(_DAT_ram_3fcb640c + 0x88))(0);
  (**(code **)(_DAT_ram_3fcb640c + 0x7c))();
  if ((uVar1 & 1) != 0) {
    FUN_ram_42076e98(0x3fcb104c);
    return;
  }
  return;
}


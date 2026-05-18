
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b54f2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_18;
  code *pcStack_14;
  
  FUN_ram_420b5446();
  iVar1 = _DAT_ram_3fcc4dfc;
  if (DAT_ram_3fcc4e00 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar3 = (code *)0x0;
    if (iVar1 != 0) {
      pcVar3 = FUN_ram_420a539c;
    }
    *(code **)(param_1 + 0x10) = pcVar3;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 3;
  }
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_ram_420b5446();
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x1c));
  }
  DAT_ram_3fcc4e00 = 0;
  FUN_ram_420b5446();
  iVar1 = FUN_ram_420b54ee();
  if (iVar1 == 0) {
    uVar2 = 5;
    if (*(int *)(param_1 + 4) != 1) {
      uVar2 = 6;
      if (*(int *)(param_1 + 4) != 2) {
        uVar2 = 4;
      }
    }
    FUN_ram_420b54ec(uVar2);
  }
  pcVar3 = FUN_ram_420b556a;
  FUN_ram_42010be2();
  iStack_18 = param_1;
  pcStack_14 = pcVar3;
  iVar1 = FUN_ram_40394a24(0x13);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x20000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xdfffffff;
  }
  FUN_ram_40394a46(0x13,iVar1);
  uStack_28 = 0x40386128;
  uStack_24 = 0x40386134;
  FUN_ram_403963b6(&DAT_ram_3fcb9574);
  FUN_ram_403963cc(&DAT_ram_3fcb9574,&uStack_28);
  (*(code *)&SUB_ram_400102cc)(&DAT_ram_3fcb9574,0);
  (*(code *)&SUB_ram_400102d0)(&DAT_ram_3fcb9574,2,0);
  (*(code *)&SUB_ram_400102d4)(&DAT_ram_3fcb9574,2,0);
  (*(code *)&SUB_ram_400102d8)(&DAT_ram_3fcb9574,0,0,1);
  return 0;
}


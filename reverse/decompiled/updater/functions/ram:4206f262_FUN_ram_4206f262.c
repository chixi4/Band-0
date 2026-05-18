
undefined4 FUN_ram_4206f262(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_ram_4206e7ba();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_ram_4206f19a();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_ram_4206f150(param_1);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = FUN_ram_4202939a(1,0xdc);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar1 = FUN_ram_4202939a(1,0x6c);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar2 = FUN_ram_4202939a(1,0x230);
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 == 0) goto LAB_ram_4206f314;
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_ram_4206f254(*(int *)(param_1 + 0x34));
    iVar2 = *(int *)(param_1 + 0x38);
    (*(code *)&SUB_ram_40010488)(iVar2,0,0x230);
    FUN_ram_42028e32(iVar2 + 0x14c);
    FUN_ram_42028e32(iVar2 + 0x158);
    *(undefined4 *)(iVar2 + 0x10) = 0x4205ec90;
    FUN_ram_4202e7da(iVar2 + 0x48);
    *(undefined1 *)(iVar2 + 2) = 3;
    FUN_ram_4206ee28(*(undefined4 *)(param_1 + 0x48));
    uVar1 = FUN_ram_4206ed9e(param_1);
    return uVar1;
  }
LAB_ram_4206f314:
  FUN_ram_420293a0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 0xffff8100;
}



undefined4 FUN_ram_420601e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_ram_420601aa();
  iVar1 = FUN_ram_40399d1a(1,0x160);
  *(int *)(param_1 + 0x7c) = iVar1;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4205e418(param_2);
    *(int *)(iVar1 + 100) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x70) = param_2;
      uVar3 = FUN_ram_4205e4ae();
      *(undefined4 *)(iVar1 + 0x68) = uVar3;
      uVar3 = FUN_ram_4205e4c2(*(undefined4 *)(iVar1 + 100));
      *(undefined4 *)(iVar1 + 0x70) = uVar3;
      uVar3 = FUN_ram_4205e4b4(*(undefined4 *)(iVar1 + 100));
      *(undefined4 *)(iVar1 + 0x88) = uVar3;
      iVar2 = FUN_ram_4205e4c6(*(undefined4 *)(iVar1 + 100));
LAB_ram_42060232:
      *(int *)(iVar1 + 0x74) = iVar2;
      return 0;
    }
    iVar2 = FUN_ram_4206294a(param_2);
    *(int *)(iVar1 + 0x6c) = iVar2;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x10);
      *(undefined4 *)(param_1 + 0x70) = param_2;
      *(int *)(iVar1 + 0x68) = iVar4;
      if (iVar4 < 0x201) {
        iVar2 = FUN_ram_42066328(*(undefined4 *)(iVar2 + 0xc));
        *(int *)(iVar1 + 0x78) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar1 + 0x70) = iVar2;
          uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x14);
          *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x18);
          iVar2 = FUN_ram_42066328(uVar3);
          *(int *)(iVar1 + 0x7c) = iVar2;
          if (iVar2 != 0) goto LAB_ram_42060232;
        }
      }
      FUN_ram_420601aa(param_1);
    }
  }
  return 0xffffffff;
}


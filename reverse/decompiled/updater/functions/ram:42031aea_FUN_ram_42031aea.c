
undefined4 FUN_ram_42031aea(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_4204e418();
  FUN_ram_4204e47c(1);
  FUN_ram_4204e128(param_1,param_1 + 0x20,*(undefined2 *)(param_1 + 0x40));
  FUN_ram_4204e078(2);
  FUN_ram_4204e0ac();
  do {
    iVar1 = FUN_ram_4204e0c6();
  } while (iVar1 == 0);
  uVar2 = FUN_ram_4204e1ea();
  FUN_ram_4204e47c(0);
  FUN_ram_4204e428();
  return uVar2;
}


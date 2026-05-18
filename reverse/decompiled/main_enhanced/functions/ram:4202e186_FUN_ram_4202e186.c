
undefined4 FUN_ram_4202e186(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420365de(param_2);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x74);
    uVar3 = *(undefined4 *)(iVar1 + 0x78);
    thunk_FUN_ram_4202b7f6();
    uVar2 = FUN_ram_4202e156(param_1,uVar2,uVar3);
    return uVar2;
  }
  thunk_FUN_ram_4202b7f6();
  return 7;
}



undefined4 FUN_ram_420535a2(int param_1)

{
  if ((DAT_ram_3fcb67d8 & 0x10) != 0) {
    if (((*(ushort *)(param_1 + 0x1e) & 0x10) == 0) && (*(code **)(param_1 + 0x90) != (code *)0x0))
    {
      (**(code **)(param_1 + 0x90))(*(undefined4 *)(param_1 + 0x10),0xfffffff1);
    }
    FUN_ram_42052bb0(&DAT_ram_3fcb67c0,param_1);
    FUN_ram_42052626(param_1);
    return 1;
  }
  return 0;
}


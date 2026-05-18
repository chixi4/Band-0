
undefined4 FUN_ram_42055988(int param_1)

{
  if ((DAT_ram_3fcc5308 & 0x10) != 0) {
    if (((*(ushort *)(param_1 + 0x1e) & 0x10) == 0) && (*(code **)(param_1 + 0x94) != (code *)0x0))
    {
      (**(code **)(param_1 + 0x94))(*(undefined4 *)(param_1 + 0x10),0xfffffff1);
    }
    FUN_ram_42054c00(&DAT_ram_3fcc52f0,param_1);
    FUN_ram_42054506(param_1);
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039a3e0(int param_1,uint *param_2)

{
  FUN_ram_4039c11e(param_1 + 0x1c,param_2,8);
  _DAT_ram_6000209c = _DAT_ram_6000209c & 0xff80003f | (*param_2 & 0xffff) << 6;
  _DAT_ram_600020a0 =
       (uint)CONCAT12((char)param_2[1],
                      CONCAT11(*(undefined1 *)((int)param_2 + 5),*(undefined1 *)((int)param_2 + 6)))
  ;
  return 0;
}


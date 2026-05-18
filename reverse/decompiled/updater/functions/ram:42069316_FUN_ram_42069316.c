
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42069316(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_ram_3fcdfaf0 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x158))(0x3c);
    if (_DAT_ram_3fcdfaf0 == 0) {
      FUN_ram_42033fd8(1,0x100,2,"entry fault");
      return 0x101;
    }
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcdfaf0,0,0x3c);
    if ((_DAT_ram_3fcb3f74 != 0) &&
       (iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x124))(0x3c073628,1,_DAT_ram_3fcdfaf0 + 0x38),
       iVar1 != 0)) {
      FUN_ram_42033fd8(1,0x100,2,"Preload configurations fault",iVar1);
      return iVar1;
    }
  }
  *(undefined4 *)(_DAT_ram_3fcdfaf0 + 8) = 0;
  return 0;
}


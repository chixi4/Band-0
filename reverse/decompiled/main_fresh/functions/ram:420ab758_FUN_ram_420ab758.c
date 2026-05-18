
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420ab758(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_ram_3fcdfaf0 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x158))(0x3c);
    if (_DAT_ram_3fcdfaf0 == 0) {
      FUN_ram_4207a038(1,0x100,2,&DAT_ram_3c102394);
      return 0x101;
    }
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcdfaf0,0,0x3c);
    if ((_DAT_ram_3fcc2ffc != 0) &&
       (iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x124))
                          ("t one thing today.",1,_DAT_ram_3fcdfaf0 + 0x38), iVar1 != 0)) {
      FUN_ram_4207a038(1,0x100,2,&DAT_ram_3c1023a0,iVar1);
      return iVar1;
    }
  }
  *(undefined4 *)(_DAT_ram_3fcdfaf0 + 8) = 0;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420257fe(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  _DAT_ram_3fcb6a56 = _DAT_ram_3fcb6a4c + 0x13;
  uVar1 = (uint)_DAT_ram_3fcb6a56;
  uVar7 = _DAT_ram_3fcb6a4e + 3 & 0xffff;
  uVar6 = _DAT_ram_3fcb6a50 + 8 & 0xffff;
  uVar5 = _DAT_ram_3fcb6a52 + 10 & 0xffff;
  uVar2 = _DAT_ram_3fcb6a54 + 4 & 0xffff;
  if ((((((uVar1 == 0) ||
         ((_DAT_ram_3fcb6ad8 = FUN_ram_403a5e0c(uVar1 * 0xc), _DAT_ram_3fcb6ad8 != 0 &&
          (iVar3 = (*(code *)&SUB_ram_40011a60)
                             (0x3fcb6adc,uVar1,0xc,_DAT_ram_3fcb6ad8,"s keep repeating."),
          iVar3 == 0)))) &&
        ((uVar7 == 0 ||
         ((_DAT_ram_3fcb6ab8 = FUN_ram_403a5e0c(uVar7 << 2), _DAT_ram_3fcb6ab8 != 0 &&
          (iVar3 = (*(code *)&SUB_ram_40011a60)
                             (0x3fcb6abc,uVar7,4,_DAT_ram_3fcb6ab8,&DAT_ram_3c0c25cc), iVar3 == 0)))
         ))) && ((uVar6 == 0 ||
                 ((_DAT_ram_3fcb6a98 = FUN_ram_403a5e0c(uVar6 * 0xc), _DAT_ram_3fcb6a98 != 0 &&
                  (iVar3 = (*(code *)&SUB_ram_40011a60)
                                     (0x3fcb6a9c,uVar6,0xc,_DAT_ram_3fcb6a98,&DAT_ram_3c0c25e4),
                  iVar3 == 0)))))) &&
      ((uVar5 == 0 ||
       ((_DAT_ram_3fcb6a78 = FUN_ram_403a5e0c(uVar5 << 2), _DAT_ram_3fcb6a78 != 0 &&
        (iVar3 = (*(code *)&SUB_ram_40011a60)
                           (0x3fcb6a7c,uVar5,4,_DAT_ram_3fcb6a78,
                            "a decision, list the cost of not choosing."), iVar3 == 0)))))) &&
     ((uVar2 == 0 ||
      ((_DAT_ram_3fcb6a58 = FUN_ram_403a5e0c(uVar2 << 2), _DAT_ram_3fcb6a58 != 0 &&
       (iVar3 = (*(code *)&SUB_ram_40011a60)
                          (0x3fcb6a5c,uVar2,4,_DAT_ram_3fcb6a58,"t of not choosing."), iVar3 == 0)))
      ))) {
    uVar4 = 0;
  }
  else {
    if (_DAT_ram_3fcb6ad8 != 0) {
      FUN_ram_403a5e16();
      _DAT_ram_3fcb6ad8 = 0;
    }
    if (_DAT_ram_3fcb6ab8 != 0) {
      FUN_ram_403a5e16();
      _DAT_ram_3fcb6ab8 = 0;
    }
    if (_DAT_ram_3fcb6a98 != 0) {
      FUN_ram_403a5e16();
      _DAT_ram_3fcb6a98 = 0;
    }
    if (_DAT_ram_3fcb6a78 != 0) {
      FUN_ram_403a5e16();
      _DAT_ram_3fcb6a78 = 0;
    }
    if (_DAT_ram_3fcb6a58 != 0) {
      FUN_ram_403a5e16();
      _DAT_ram_3fcb6a58 = 0;
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


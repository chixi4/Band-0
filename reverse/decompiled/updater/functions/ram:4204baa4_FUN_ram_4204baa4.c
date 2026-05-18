
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204baa4(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 != 0) {
    if (param_3 == 0) {
      uVar5 = (uint)(_DAT_ram_3fcb5520 + _DAT_ram_3fcb53e0 < _DAT_ram_3fcb53e0) +
              _DAT_ram_3fcb53e4 + _DAT_ram_3fcb5524;
      if (param_2 < uVar5) {
        return;
      }
      if ((uVar5 == param_2) && (param_1 < _DAT_ram_3fcb5520 + _DAT_ram_3fcb53e0)) {
        return;
      }
    }
    iVar1 = FUN_ram_4039d0ae();
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
    uVar6 = (*(code *)&SUB_ram_40010a00)
                      (_DAT_ram_6004d000 - _DAT_ram_3fcb53d0,
                       -(uint)(_DAT_ram_6004d000 < _DAT_ram_6004d000 - _DAT_ram_3fcb53d0) -
                       _DAT_ram_3fcb53d4,iVar1 * iVar2 * 100,0);
    pbVar3 = (byte *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x1d8))(0);
    if (pbVar3 == (byte *)0x0) {
      FUN_ram_42033fd8(6,0x1000,1,0x3c07df48,0x3c072f54,0x58);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
    uVar5 = param_1 - (int)uVar6;
    iVar2 = (uint)*pbVar3 * iVar1 * iVar2;
    _DAT_ram_3fcb53e0 = uVar5 + iVar2;
    _DAT_ram_3fcb53e4 =
         (uint)(_DAT_ram_3fcb53e0 < uVar5) +
         ((param_2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)(param_1 < uVar5));
    iVar1 = 1000;
    if (DAT_ram_3fcb537e != '\0') {
      iVar1 = _DAT_ram_3fcb53b0;
    }
    _DAT_ram_3fcb53e8 = _DAT_ram_3fcb53e0 - iVar1;
    _DAT_ram_3fcb53ec = _DAT_ram_3fcb53e4 - (uint)(_DAT_ram_3fcb53e0 < _DAT_ram_3fcb53e8);
    iVar1 = FUN_ram_4039d0ae();
    iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b8))();
    uVar5 = iVar1 * iVar4 * 100;
    _DAT_ram_3fcb5520 = uVar5 - iVar2;
    _DAT_ram_3fcb5524 = -(uint)(uVar5 < _DAT_ram_3fcb5520);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
    if ((param_2 < _DAT_ram_3fcb53ec) ||
       ((_DAT_ram_3fcb53ec == param_2 && (param_1 < _DAT_ram_3fcb53e8)))) {
      DAT_ram_3fcb538a = 1;
                    /* WARNING: Could not recover jumptable at 0x4204bc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))(0x3fcb5460,_DAT_ram_3fcb53e8 - param_1,0);
      return;
    }
    DAT_ram_3fcb538a = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420492cc(undefined1 param_1,undefined2 param_2,undefined4 param_3,int param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = _DAT_ram_3fcb53c8;
  uVar2 = _DAT_ram_3fcb53f0;
  uVar3 = _DAT_ram_3fcb53f8;
  uVar4 = _DAT_ram_3fcb5400;
  if (DAT_ram_3fcb537e == '\0') {
    if (*(code **)(_DAT_ram_3fcb1020 + 0x30) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcb1020 + 0x30))();
    }
    FUN_ram_42033fd8(6,0x1000,3,0x3c07ebe0,_DAT_ram_3fcb5394);
    DAT_ram_3fcb537f = 1;
    DAT_ram_3fcb5380 = 0;
    DAT_ram_3fcb5530 = 0;
    DAT_ram_3fcb5372 = param_1;
    _DAT_ram_3fcb538c = param_2;
    FUN_ram_40399daa(0x3fcb5373,param_3,6);
    _DAT_ram_3fcb5408 = 0;
    _DAT_ram_3fcb540c = 0;
    DAT_ram_3fcb5385 = 0;
    DAT_ram_3fcb5386 = 0;
    DAT_ram_3fcb5558 = 0;
    DAT_ram_3fcb5379 = 0;
    DAT_ram_3fcb537a = 0;
    _DAT_ram_3fcb53b8 = 0;
    _DAT_ram_3fcb53bc = 0;
    _DAT_ram_3fcb5400 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcb53f0 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcb53f8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcb53c8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcb53a4 = param_4 << 10;
    if (param_4 == 0) {
      _DAT_ram_3fcb53a4 = 0x19000;
    }
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar5 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(_DAT_ram_3fcb53a4 / 100);
    }
    DAT_ram_3fcb537b = 1;
    FUN_ram_4039c4dc();
    _DAT_ram_3fcb538a = 1;
    DAT_ram_3fcb5490 = 0;
    DAT_ram_3fcb537d = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    DAT_ram_3fcb5538 = 0;
    DAT_ram_3fcb5382 = 1;
    _DAT_ram_3fcb53d8 = param_6;
    _DAT_ram_3fcb53dc = param_7;
    (*(code *)&SUB_ram_40011e2c)(1);
    _DAT_ram_3fcb53d4 = 0;
    _DAT_ram_3fcb53d0 = 0;
    _DAT_ram_3fcb5540 = 0;
    DAT_ram_3fcb558c = 0;
    FUN_ram_4204c26e();
    uStack_38 = param_6;
    uStack_34 = param_7;
    FUN_ram_4207940e(param_5,&uStack_38,0);
    uStack_39 = 0;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(0,&uStack_39);
    (*(code *)&SUB_ram_40011e30)(uStack_39);
    FUN_ram_4204d610(_DAT_ram_3fcb53ac,*(undefined4 *)(gp + 0xe4));
    FUN_ram_42033fd8(1,1,3,0x3c07ebf4,uStack_39,_DAT_ram_3fcb53ac,uStack_39,
                     *(undefined4 *)(gp + 0xe4));
    FUN_ram_42047c98();
    (*(code *)&SUB_ram_40011b84)();
    FUN_ram_42048fbe(4);
    DAT_ram_3fcb5539 = 1;
    if (DAT_ram_3fcb5491 != '\0') {
      DAT_ram_3fcb5491 = '\x01';
    }
    FUN_ram_40392eec(3,1);
    FUN_ram_40392eec(4,1);
    FUN_ram_40392eec(5,0);
    DAT_ram_3fcb537e = '\x01';
    _DAT_ram_3fcb5368 = 0;
    _DAT_ram_3fcb536c = 0;
    DAT_ram_3fcb558e = 0;
    (*(code *)&SUB_ram_40011f70)();
    uVar1 = _DAT_ram_3fcb53c8;
    uVar2 = _DAT_ram_3fcb53f0;
    uVar3 = _DAT_ram_3fcb53f8;
    uVar4 = _DAT_ram_3fcb5400;
  }
  _DAT_ram_3fcb5404 = (undefined4)((ulonglong)uVar4 >> 0x20);
  _DAT_ram_3fcb5400 = (undefined4)uVar4;
  _DAT_ram_3fcb53fc = (undefined4)((ulonglong)uVar3 >> 0x20);
  _DAT_ram_3fcb53f8 = (undefined4)uVar3;
  _DAT_ram_3fcb53f4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  _DAT_ram_3fcb53f0 = (undefined4)uVar2;
  _DAT_ram_3fcb53cc = (undefined4)((ulonglong)uVar1 >> 0x20);
  _DAT_ram_3fcb53c8 = (undefined4)uVar1;
  return;
}


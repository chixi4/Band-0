
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091cd4(undefined1 param_1,undefined2 param_2,undefined4 param_3,int param_4,
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
  
  uVar1 = _DAT_ram_3fcc4458;
  uVar2 = _DAT_ram_3fcc4480;
  uVar3 = _DAT_ram_3fcc4488;
  uVar4 = _DAT_ram_3fcc4490;
  if (DAT_ram_3fcc440e == '\0') {
    if (*(code **)(_DAT_ram_3fcb84cc + 0x30) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcb84cc + 0x30))();
    }
    FUN_ram_4207a038(6,0x1000,3,&DAT_ram_3c100710,_DAT_ram_3fcc4424);
    DAT_ram_3fcc440f = 1;
    DAT_ram_3fcc4410 = 0;
    DAT_ram_3fcc45c0 = 0;
    DAT_ram_3fcc4402 = param_1;
    _DAT_ram_3fcc441c = param_2;
    FUN_ram_4039c11e(0x3fcc4403,param_3,6);
    _DAT_ram_3fcc4498 = 0;
    _DAT_ram_3fcc449c = 0;
    DAT_ram_3fcc4415 = 0;
    DAT_ram_3fcc4416 = 0;
    DAT_ram_3fcc45e8 = 0;
    DAT_ram_3fcc4409 = 0;
    DAT_ram_3fcc440a = 0;
    _DAT_ram_3fcc4448 = 0;
    _DAT_ram_3fcc444c = 0;
    _DAT_ram_3fcc4490 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcc4480 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcc4488 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcc4458 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcc4434 = param_4 << 10;
    if (param_4 == 0) {
      _DAT_ram_3fcc4434 = 0x19000;
    }
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar5 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(_DAT_ram_3fcc4434 / 100);
    }
    DAT_ram_3fcc440b = 1;
    FUN_ram_4039e8b0();
    _DAT_ram_3fcc441a = 1;
    DAT_ram_3fcc4520 = 0;
    DAT_ram_3fcc440d = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    DAT_ram_3fcc45c8 = 0;
    DAT_ram_3fcc4412 = 1;
    _DAT_ram_3fcc4468 = param_6;
    _DAT_ram_3fcc446c = param_7;
    (*(code *)&SUB_ram_40011e2c)(1);
    _DAT_ram_3fcc4464 = 0;
    _DAT_ram_3fcc4460 = 0;
    _DAT_ram_3fcc45d0 = 0;
    DAT_ram_3fcc461c = 0;
    FUN_ram_42094ca2();
    uStack_38 = param_6;
    uStack_34 = param_7;
    FUN_ram_420b2b12(param_5,&uStack_38,0);
    uStack_39 = 0;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(0,&uStack_39);
    (*(code *)&SUB_ram_40011e30)(uStack_39);
    FUN_ram_420960ae(_DAT_ram_3fcc443c,*(undefined4 *)(gp + 0x218));
    FUN_ram_4207a038(1,1,3,&DAT_ram_3c100724,uStack_39,_DAT_ram_3fcc443c,uStack_39,
                     *(undefined4 *)(gp + 0x218));
    FUN_ram_420906a0();
    (*(code *)&SUB_ram_40011b84)();
    FUN_ram_420919c6(4);
    DAT_ram_3fcc45c9 = 1;
    if (DAT_ram_3fcc4521 != '\0') {
      DAT_ram_3fcc4521 = '\x01';
    }
    FUN_ram_40393cee(3,1);
    FUN_ram_40393cee(4,1);
    FUN_ram_40393cee(5,0);
    DAT_ram_3fcc440e = '\x01';
    _DAT_ram_3fcc43f8 = 0;
    _DAT_ram_3fcc43fc = 0;
    DAT_ram_3fcc461e = 0;
    (*(code *)&SUB_ram_40011f70)();
    uVar1 = _DAT_ram_3fcc4458;
    uVar2 = _DAT_ram_3fcc4480;
    uVar3 = _DAT_ram_3fcc4488;
    uVar4 = _DAT_ram_3fcc4490;
  }
  _DAT_ram_3fcc4494 = (undefined4)((ulonglong)uVar4 >> 0x20);
  _DAT_ram_3fcc4490 = (undefined4)uVar4;
  _DAT_ram_3fcc448c = (undefined4)((ulonglong)uVar3 >> 0x20);
  _DAT_ram_3fcc4488 = (undefined4)uVar3;
  _DAT_ram_3fcc4484 = (undefined4)((ulonglong)uVar2 >> 0x20);
  _DAT_ram_3fcc4480 = (undefined4)uVar2;
  _DAT_ram_3fcc445c = (undefined4)((ulonglong)uVar1 >> 0x20);
  _DAT_ram_3fcc4458 = (undefined4)uVar1;
  return;
}


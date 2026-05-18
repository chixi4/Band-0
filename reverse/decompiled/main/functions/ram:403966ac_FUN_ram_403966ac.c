
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403966ac(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_a4;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = mstatus;
  mstatus = mstatus & 0xfffffff7;
  (*(code *)&SUB_ram_4001027c)(auStack_20,0,0,0,in_a4,uVar1);
  uVar2 = FUN_ram_40394e16();
  (*(code *)&SUB_ram_40010288)(auStack_20);
  (*(code *)&SUB_ram_40010284)(auStack_20,0,uVar2,3);
  (*(code *)&SUB_ram_40010284)(auStack_20,1,uVar2,4);
  (*(code *)&SUB_ram_400102a0)(auStack_20,1);
  (*(code *)&SUB_ram_4001028c)(auStack_20);
  uStack_18 = 1;
  uStack_14 = 0x6001f000;
  (*(code *)&SUB_ram_40010288)(&uStack_18);
  (*(code *)&SUB_ram_40010294)(&uStack_18);
  (*(code *)&SUB_ram_4001028c)(&uStack_18);
  (*(code *)&SUB_ram_4001071c)();
  _DAT_ram_60004154 = 0x30;
  _DAT_ram_60004158 = 0x30;
  _DAT_ram_6000415c = 0x30;
  _DAT_ram_60004160 = 0x30;
  _DAT_ram_60004164 = 0x30;
  _DAT_ram_60004168 = 0x30;
  FUN_ram_40396772();
  FUN_ram_40390ffc();
  (*(code *)&SUB_ram_4001008c)(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


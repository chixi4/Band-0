
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42086aaa(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_5c [32];
  undefined1 uStack_3c;
  undefined1 auStack_3b [6];
  undefined1 uStack_35;
  undefined1 uStack_34;
  
  iVar5 = _DAT_ram_3fcc4014;
  _DAT_ram_3fcc3078 = _DAT_ram_3fcc3078 | 0x10;
  iVar1 = FUN_ram_4208656a();
  while( true ) {
    if (iVar1 == 0) {
      FUN_ram_4208690c();
      FUN_ram_420864f8();
      FUN_ram_4208578e();
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcb98,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),3);
      *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 3;
      uStack_35 = 0xcd;
      if ((((DAT_ram_3fcc3fa4 == '\0') && (uStack_35 = 0xd4, DAT_ram_3fcc3fa5 == '\0')) &&
          (uStack_35 = 0xd3, DAT_ram_3fcc3075 == '\0')) &&
         (uStack_35 = 0xd2, DAT_ram_3fcc3074 == '\0')) {
        uStack_35 = 0xc9;
      }
      (**(code **)(_DAT_ram_3fcc4178 + 0x10))(uStack_35);
      iVar1 = *(int *)(gp + -0xb4);
      uStack_34 = 0x80;
      (*(code *)&SUB_ram_40010488)(auStack_3b,0,6);
      FUN_ram_4039c11e(auStack_5c,iVar1 + 8,0x20);
      uStack_3c = (undefined1)*(undefined4 *)(iVar1 + 4);
      FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fcb30,uStack_35);
      FUN_ram_4208344a(5,auStack_5c,0x29);
      FUN_ram_42094484();
      if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\0') {
        FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fcbd0);
      }
      else {
        if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x02') {
          FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fcbe4);
        }
        iVar1 = FUN_ram_4207fec0();
        iVar5 = iVar5 + 4;
        if (iVar1 == 0) {
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcc04);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
          FUN_ram_420919c6(0);
          iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
          if (iVar5 != 0) {
            (*(code *)&SUB_ram_40011ee4)();
          }
          (*(code *)&SUB_ram_40011d48)();
        }
        else {
          FUN_ram_4207a038(1,4,3,&DAT_ram_3c0fff4c);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar5,0x42075280,0);
          if (DAT_ram_3fcc41bc == '\x06') {
            pcVar4 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
            uVar3 = 4000;
          }
          else {
            uVar3 = 1000;
            pcVar4 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
          }
          (*pcVar4)(iVar5,uVar3,0);
        }
      }
      return 0;
    }
    FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fcb54,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9));
    DAT_ram_3fcc41be = *(undefined1 *)(iVar1 + 0x29e);
    _DAT_ram_3fcc41bc = *(undefined2 *)(iVar1 + 0x29c);
    DAT_ram_3fcc41c7 = 0;
    *(undefined1 *)(iVar1 + 0x3ae) = DAT_ram_3fcc41be;
    DAT_ram_3fcc41c0 = *(undefined1 *)(iVar1 + 0x2a0);
    _DAT_ram_3fcc41c4 = *(undefined2 *)(iVar1 + 0x2a4);
    DAT_ram_3fcc4250 = *(undefined1 *)(iVar1 + 0x37e);
    DAT_ram_3fcc4251 = *(undefined1 *)(iVar1 + 0x37f);
    DAT_ram_3fcc41c6 = *(undefined1 *)(iVar1 + 0x2a6);
    if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x03') {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcb80,3,1);
      *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 1;
    }
    FUN_ram_4207a038(1,4,5,
                     "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..." /* TRUNCATED STRING LITERAL */
                     ,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9),
                     *(undefined1 *)(iVar1 + 0x28a));
    DAT_ram_3fcc305d = *(byte *)(iVar1 + 0x28a) ^ 1;
    if ((_DAT_ram_3fcc4178 != 0) &&
       (iVar2 = (**(code **)(_DAT_ram_3fcc4178 + 8))(iVar1 + 4), iVar2 == 0)) break;
    FUN_ram_42086408(iVar1 + 4);
    FUN_ram_42086996(iVar1);
    iVar1 = FUN_ram_4208656a();
  }
  return 0;
}


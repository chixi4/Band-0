
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079418(char *param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char local_30 [4];
  uint uStack_2c;
  char cStack_28;
  uint uStack_24;
  
  if (param_1 == (char *)0x0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe5fc,&DAT_ram_3c0c419c,0x290);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  iVar5 = _DAT_ram_3fcdfb1c;
  cVar1 = *param_1;
  bVar2 = param_1[1];
  cVar3 = *(char *)(_DAT_ram_3fcdfb1c + 0x50);
  bVar4 = *(byte *)(_DAT_ram_3fcdfb1c + 0x51);
  *(char *)(_DAT_ram_3fcdfb1c + 0x50) = cVar1;
  *(byte *)(iVar5 + 0x51) = bVar2;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  if ((cVar1 != cVar3) || ((uint)bVar2 != (uint)bVar4)) {
    cStack_28 = *param_1;
    uStack_24 = (uint)(byte)param_1[1];
    local_30[0] = cVar3;
    uStack_2c = (uint)bVar4;
    FUN_ram_4208344a(0x2b,local_30,0x10);
    DAT_ram_3fcc41d4 = 1;
  }
  return;
}


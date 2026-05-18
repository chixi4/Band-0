
void FUN_ram_420b2552(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = *param_1;
  if (*(char *)((int)param_1 + 0x12) != '\x06') {
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff6c4,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac30,0x32f);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  puVar3 = *(uint **)(iVar1 + 0x24);
  *param_1 = 0;
  if ((*puVar3 & 0x200000) != 0) {
    (*(code *)&SUB_ram_40011c0c)(puVar3[4] >> 0x14 & 0xf,*(char *)((int)puVar3 + 5) + '\x02');
    (*(code *)&SUB_ram_40011c20)(*(uint *)(*(int *)(iVar1 + 0x24) + 0x10) >> 0x14 & 0xf);
    return;
  }
  if ((*puVar3 & 0x400000) != 0) {
    (*(code *)&SUB_ram_40011c18)(iVar1,1);
    return;
  }
  if (*(byte *)((int)puVar3 + 6) < *(byte *)(gp + 0x6f9)) {
    if (*(byte *)((int)puVar3 + 7) < *(byte *)(gp + 0x6f8)) {
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 2;
  }
  FUN_ram_42093faa(param_1,iVar1,uVar2,1);
  return;
}


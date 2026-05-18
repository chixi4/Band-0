
undefined1 * FUN_ram_4207d2c4(undefined1 *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  if ((param_2 == (int *)0x0) || (iVar5 = *param_2, iVar5 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7f0,&DAT_ram_3c0c426c,0xad1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)&SUB_ram_40010488)(param_1,0,0x16);
  puVar1 = (undefined1 *)FUN_ram_4207940a();
  *param_1 = *puVar1;
  bVar4 = (byte)((uint)*(undefined4 *)(*param_2 + 300) >> 0x1a) & 8;
  param_1[1] = bVar4;
  if (*(char *)(iVar5 + 299) == '\x01') {
    bVar4 = bVar4 | 1;
    if ((byte)(*(char *)(iVar5 + 0x12a) - 1U) < 9) {
LAB_ram_4207d3b4:
      param_1[1] = bVar4;
    }
  }
  else if ((*(char *)(iVar5 + 299) == '\x02') && ((byte)(*(char *)(iVar5 + 0x12a) - 5U) < 9)) {
    bVar4 = bVar4 | 3;
    goto LAB_ram_4207d3b4;
  }
  if (*(char *)(iVar5 + 299) == '\x01') {
    bVar4 = *(char *)(iVar5 + 0x12a) - 1;
  }
  else {
    if (*(char *)(iVar5 + 299) != '\x02') goto LAB_ram_4207d36a;
    bVar4 = *(char *)(iVar5 + 0x12a) - 5;
  }
  if (bVar4 < 9) {
    param_1[1] = param_1[1] | 4;
  }
LAB_ram_4207d36a:
  param_1[2] = *(undefined1 *)(*param_2 + 0x18c);
  iVar5 = *param_2;
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(iVar5 + 0x18d); iVar2 = iVar2 + 1) {
    bVar4 = *(byte *)(iVar5 + iVar2 + 0x18e);
    if (((char)bVar4 < '\0') && (uVar3 = bVar4 & 0x7f, uVar3 != 0x7f)) {
      param_1[((int)uVar3 >> 3) + 6] = (byte)(1 << (bVar4 & 7)) | param_1[((int)uVar3 >> 3) + 6];
    }
  }
  return param_1 + 0x16;
}


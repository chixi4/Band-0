
void FUN_ram_42057d70(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort uVar4;
  
  puVar2 = &DAT_ram_3fcb5d24;
  iVar3 = 0;
  do {
    cVar1 = puVar2[0x14];
    if (cVar1 != '\0') {
      uVar4 = *(short *)(puVar2 + 0x12) + 1;
      *(ushort *)(puVar2 + 0x12) = uVar4;
      if (uVar4 < 300) {
        if (cVar1 == '\x01') {
          if (4 < uVar4) goto LAB_ram_42057db8;
          FUN_ram_42057d4e(*(undefined4 *)(puVar2 + 8),puVar2 + 4);
        }
        else if (cVar1 == '\x03') {
          puVar2[0x14] = 4;
        }
        else if (cVar1 == '\x04') {
          puVar2[0x14] = 2;
        }
      }
      else {
LAB_ram_42057db8:
        FUN_ram_42057930(iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x18;
    if (iVar3 == 10) {
      return;
    }
  } while( true );
}


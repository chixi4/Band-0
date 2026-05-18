
void FUN_ram_420229f2(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0;
  do {
    bVar1 = *param_2;
    if (bVar1 == 0) {
LAB_ram_42022a40:
      *(undefined1 *)(param_1 + uVar6) = 0;
      if (uVar6 == 0) {
        FUN_ram_4039c61e(param_1,"rection.",0x5f);
        *(undefined1 *)(param_1 + 0x5f) = 0;
      }
      return;
    }
    if (uVar6 + 1 == 0x60) {
      uVar6 = 0x5f;
      goto LAB_ram_42022a40;
    }
    bVar2 = param_2[1];
    if ((bVar1 & 0xf8) == 0xf0) {
      do {
        param_2 = param_2 + 1;
      } while ((*param_2 & 0xc0) == 0x80);
    }
    else if (bVar2 == 0) {
LAB_ram_42022b06:
      if (bVar1 == 0x27) {
        pcVar5 = "erify direction.";
      }
      else if (bVar1 < 0x28) {
        if (bVar1 == 0x22) {
          pcVar5 = "at can verify direction.";
        }
        else {
          if (bVar1 != 0x26) goto LAB_ram_42022af2;
          pcVar5 = "Run the smallest test that can verify direction.";
        }
      }
      else if (bVar1 == 0x3c) {
        pcVar5 = "smallest test that can verify direction.";
      }
      else {
        if (bVar1 != 0x3e) goto LAB_ram_42022af2;
        pcVar5 = " test that can verify direction.";
      }
      iVar4 = (*(code *)&SUB_ram_400104a8)(pcVar5);
      if (0x5f < uVar6 + iVar4) goto LAB_ram_42022a40;
      FUN_ram_4039c11e(param_1 + uVar6,pcVar5,iVar4);
      param_2 = param_2 + 1;
      uVar6 = uVar6 + iVar4;
    }
    else {
      bVar3 = param_2[2];
      if (0xf < (bVar3 ^ 0x80)) {
        if (bVar3 != 0) {
LAB_ram_42022afe:
          if (bVar1 == 0xe2) goto LAB_ram_42022ae0;
        }
        goto LAB_ram_42022b06;
      }
      if ((bVar1 == 0xef) && (bVar2 == 0xb8)) {
LAB_ram_42022ac4:
        param_2 = param_2 + 3;
      }
      else {
        if (bVar3 != 0x8d) goto LAB_ram_42022afe;
        if (bVar1 != 0xe2) goto LAB_ram_42022b06;
        if (bVar2 == 0x80) goto LAB_ram_42022ac4;
LAB_ram_42022ae0:
        if ((bVar2 == 0x83) && (bVar3 == 0xa3)) goto LAB_ram_42022ac4;
LAB_ram_42022af2:
        *(byte *)(uVar6 + param_1) = bVar1;
        param_2 = param_2 + 1;
        uVar6 = uVar6 + 1;
      }
    }
  } while( true );
}



void FUN_ram_4201b64c(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0x24;
  do {
    uVar7 = 0xc;
    uVar3 = 0xfffffff6;
    do {
      if (uVar3 < 0x9c) {
LAB_ram_4201b698:
        FUN_ram_4201f246((int)(short)uVar7,(int)(short)uVar6,0);
      }
      else {
        if (uVar6 < 0x2e) {
          iVar4 = uVar6 - 0x2e;
          if (0x15 < uVar7) {
LAB_ram_4201b70e:
            iVar5 = (uVar3 - 0x9b) * (uVar3 - 0x9b);
            goto LAB_ram_4201b716;
          }
          iVar5 = iVar4 * iVar4 + uVar3 * uVar3;
        }
        else {
          if (uVar6 < 0x90) goto LAB_ram_4201b698;
          iVar5 = uVar3 * uVar3;
          iVar4 = uVar6 - 0x8f;
          if (0x15 < uVar7) goto LAB_ram_4201b70e;
LAB_ram_4201b716:
          iVar5 = iVar5 + iVar4 * iVar4;
        }
        if (iVar5 < 0x65) goto LAB_ram_4201b698;
      }
      uVar3 = uVar3 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar3 != 0xa6);
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x9a) {
      sVar1 = 0x36;
      do {
        sVar2 = sVar1 + 0x16;
        FUN_ram_4201f3fe((int)sVar1,*param_1,3);
        param_1 = param_1 + 1;
        sVar1 = sVar2;
      } while (sVar2 != 0x8e);
      return;
    }
  } while( true );
}



uint FUN_ram_42022660(int param_1,uint param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  
  uVar3 = 0;
LAB_ram_4202268c:
  while( true ) {
    pcVar4 = param_3;
    cVar6 = *pcVar4;
    if ((cVar6 == '\0') || (uVar8 = uVar3 + 1, param_2 <= uVar8)) {
      if (uVar3 < param_2) {
        *(undefined1 *)(param_1 + uVar3) = 0;
      }
      return uVar3;
    }
    param_3 = pcVar4 + 1;
    if (cVar6 == '\\') break;
    *(char *)(uVar3 + param_1) = cVar6;
    uVar3 = uVar8;
  }
  bVar1 = pcVar4[1];
  if (bVar1 == 0x6e) {
    uVar7 = 10;
    goto LAB_ram_42022762;
  }
  if (bVar1 < 0x6f) {
    if (bVar1 == 0x5c) {
      *(undefined1 *)(uVar3 + param_1) = 0x5c;
LAB_ram_42022756:
      uVar3 = uVar8;
      param_3 = pcVar4 + 2;
      goto LAB_ram_4202268c;
    }
    if (bVar1 < 0x5d) {
      if (bVar1 == 0x22) {
        uVar7 = 0x22;
        goto LAB_ram_42022762;
      }
      cVar6 = bVar1 - 0x30;
      if ((byte)(bVar1 - 0x30) < 8) {
        if ((byte)(pcVar4[2] - 0x30U) < 8) {
          param_3 = pcVar4 + 3;
          cVar6 = pcVar4[2] + -0x30 + cVar6 * '\b';
        }
        else {
          param_3 = pcVar4 + 2;
        }
        cVar2 = *param_3;
        if ((byte)(cVar2 - 0x30U) < 8) {
          param_3 = param_3 + 1;
          cVar6 = cVar6 * '\b' + cVar2 + -0x30;
        }
        *(char *)(uVar3 + param_1) = cVar6;
        uVar3 = uVar8;
      }
      goto LAB_ram_4202268c;
    }
    if (bVar1 != 0x65) goto LAB_ram_4202268c;
    uVar7 = 0x1b;
  }
  else {
    if (bVar1 != 0x74) {
      if (bVar1 == 0x78) {
        iVar5 = FUN_ram_42022596(pcVar4 + 2);
        if (iVar5 == -1) {
          iVar5 = FUN_ram_4202255e(pcVar4[2]);
          param_3 = pcVar4 + 2;
          if (iVar5 != -1) {
            *(char *)(uVar3 + param_1) = (char)iVar5;
            uVar3 = uVar8;
            param_3 = pcVar4 + 3;
          }
        }
        else {
          *(char *)(uVar3 + param_1) = (char)iVar5;
          uVar3 = uVar8;
          param_3 = pcVar4 + 4;
        }
      }
      else if (bVar1 == 0x72) {
        uVar7 = 0xd;
        goto LAB_ram_42022762;
      }
      goto LAB_ram_4202268c;
    }
    uVar7 = 9;
  }
LAB_ram_42022762:
  *(undefined1 *)(uVar3 + param_1) = uVar7;
  goto LAB_ram_42022756;
}


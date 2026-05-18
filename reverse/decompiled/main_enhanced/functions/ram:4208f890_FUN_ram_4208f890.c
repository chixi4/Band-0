
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208f890(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined *puVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int aiStack_58 [9];
  
  iVar12 = _DAT_ram_3fcc4014;
  cVar1 = *(char *)(*(int *)(param_1 + 0x24) + 8);
  iVar16 = (int)**(char **)(param_1 + 0x10);
  uVar17 = *(uint *)(*(char **)(param_1 + 0x10) + 0x1c) >> 0x1f;
  iVar6 = FUN_ram_420894a2();
  cVar2 = *(char *)(*(int *)(gp + -0xb4) + 0x415);
  iVar26 = *(int *)(*(int *)(param_1 + 4) + 4);
  iVar7 = FUN_ram_420794ea(cVar1);
  if (iVar7 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff478,"lationship before overgiving.",0xa1c);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar7 = FUN_ram_4208b9e8(*(undefined1 *)(param_2 + 4));
  if (iVar7 == 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdb24);
    return 0xffffffff;
  }
  if (*(char *)(param_2 + 4) != cVar1) {
    return 0xffffffff;
  }
  iVar7 = FUN_ram_4208f7f4(param_2,*(char *)(*(int *)(gp + -0xb4) + 0x415) != '\0');
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  iVar8 = *(int *)(gp + -0xb4);
  if (*(char *)(iVar8 + 0x415) != '\0') {
    uVar21 = *(uint *)(iVar8 + 4);
    iVar19 = 0;
    if ((((uVar21 != *(byte *)(*(int *)(param_2 + 0x24) + 1)) ||
         (iVar8 = FUN_ram_4039c0e0(iVar8 + 8,*(int *)(param_2 + 0x24) + 2,uVar21), iVar8 != 0)) ||
        (uVar21 == 0)) || (*(int *)(param_2 + 0x3c) != 0)) goto LAB_ram_4208f9dc;
    iVar8 = *(int *)(param_2 + 100);
    if (iVar8 == 0) goto LAB_ram_4208fb96;
    if (_DAT_ram_3fcc43d0 == 0) {
      _DAT_ram_3fcc43d0 = 1;
    }
    puVar9 = (uint *)FUN_ram_420894a2();
    iVar19 = iVar7;
    if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') goto LAB_ram_4208f9dc;
    iVar19 = FUN_ram_4207e5a8();
    iVar25 = *(int *)(gp + -0xb4);
    uVar21 = (uint)*(byte *)(iVar8 + 0xc);
    if ((uVar21 == *(uint *)(iVar25 + 4)) &&
       (iVar23 = FUN_ram_4039c0e0(iVar25 + 8,iVar8 + 0xd,uVar21), iVar23 == 0)) {
      puVar15 = &UNK_ram_3c0fe338;
    }
    else {
      iVar23 = iVar26 + 0x10;
      if ((*(char *)(iVar25 + 0x92) == '\0') ||
         (iVar10 = FUN_ram_4039c0e0(iVar25 + 0x93,iVar23,6), iVar10 == 0)) {
        if (0x20 < uVar21) {
          uVar21 = 0x20;
        }
        *puVar9 = uVar21;
        FUN_ram_4039c11e(puVar9 + 1,iVar8 + 0xd,0x20);
        if ((_DAT_ram_3fcc43d0 & 2) == 0) {
          if (*(char *)(iVar25 + 0x92) == '\0') {
            uVar14 = FUN_ram_4039c11e(iVar19 + 0x93,iVar23,6);
            iVar25 = FUN_ram_4207e5e6(8,uVar14,DAT_ram_3fcc41d5 == '\0');
            iVar19 = iVar7;
            if (iVar25 != 0) goto LAB_ram_4208f9dc;
          }
          FUN_ram_4039c11e(puVar9 + 9,iVar8 + 6,6);
          iVar8 = FUN_ram_4207e5e6(0x2e,puVar9,DAT_ram_3fcc41d5 == '\0');
          iVar19 = iVar7;
          if (iVar8 == 0) {
            FUN_ram_4207e5ae();
          }
        }
        else {
          iVar19 = FUN_ram_4039c0e0(iVar25 + 0x93,iVar23,6);
          if ((iVar19 != 0) ||
             (iVar8 = FUN_ram_4039c0e0(puVar9 + 9,iVar8 + 6,6), iVar19 = iVar7, iVar8 != 0)) {
            puVar15 = &UNK_ram_3c0fda30;
            goto LAB_ram_4208fab2;
          }
        }
        goto LAB_ram_4208f9dc;
      }
      puVar15 = &UNK_ram_3c0fe364;
    }
    goto LAB_ram_4208fab2;
  }
LAB_ram_4208fb96:
  iVar19 = 0;
LAB_ram_4208f9dc:
  if ((*(char *)((int)_DAT_ram_3fcdfb20 + 0xa3) == '\0') &&
     ((*(char *)(*(int *)(param_2 + 0x24) + 1) == '\0' ||
      (*(char *)(*(int *)(param_2 + 0x24) + 2) == '\0')))) {
    iVar25 = iVar7;
    iVar8 = iVar7;
    if (cVar2 == '\0') {
      if (iVar12 == 0) {
        return 0;
      }
LAB_ram_4208fc1c:
      if ((*(int *)(iVar12 + 0xe4) != 0) &&
         (iVar26 = FUN_ram_4039c0e0(*(int *)(iVar12 + 0xe4) + 4,iVar26 + 0x10,6), iVar26 == 0))
      goto LAB_ram_4208fc68;
      if (cVar2 == '\0') {
        return 0;
      }
LAB_ram_4209023e:
      if (iVar19 == 0) {
        return 0;
      }
      goto LAB_ram_42090246;
    }
    iVar23 = *(int *)(param_2 + 100);
    if ((iVar23 == 0) || (*(int *)(param_2 + 0x3c) == 0)) {
      if (iVar12 != 0) goto LAB_ram_4208fc1c;
      goto LAB_ram_4209023e;
    }
    if (_DAT_ram_3fcc43d0 == 0) {
      _DAT_ram_3fcc43d0 = 2;
    }
    iVar19 = FUN_ram_420894a2();
    if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') goto LAB_ram_4208fc14;
    bVar22 = *(byte *)(iVar23 + 0xc);
    iVar20 = iVar23 + 6;
    iVar10 = FUN_ram_4207e5a8();
    iVar24 = *(int *)(gp + -0xb4);
    cVar3 = *(char *)(iVar24 + 0x92);
    if ((cVar3 == '\0') || (iVar11 = FUN_ram_4039c0e0(iVar24 + 0x93,iVar20,6), iVar11 == 0)) {
      if (((uint)bVar22 == *(uint *)(iVar24 + 4)) &&
         (iVar23 = FUN_ram_4039c0e0(iVar24 + 8,iVar23 + 0xd,(uint)bVar22), iVar23 == 0)) {
        if ((_DAT_ram_3fcc43d0 & 1) == 0) {
          if (cVar3 == '\0') {
            uVar14 = FUN_ram_4039c11e(iVar10 + 0x93,iVar20,6);
            iVar23 = FUN_ram_4207e5e6(8,uVar14,DAT_ram_3fcc41d5 == '\0');
            if (iVar23 != 0) goto LAB_ram_4208fc14;
          }
          FUN_ram_4039c11e(iVar19 + 0x24,iVar26 + 0x10,6);
        }
        else {
          iVar19 = FUN_ram_4039c0e0(iVar19 + 0x24,iVar26 + 0x10,6);
          if ((iVar19 != 0) || (iVar19 = FUN_ram_4039c0e0(iVar24 + 0x93,iVar20,6), iVar19 != 0)) {
            puVar15 = &UNK_ram_3c0fda60;
            goto LAB_ram_4208fab2;
          }
        }
LAB_ram_4208fc14:
        iVar19 = iVar7;
        if (iVar12 != 0) goto LAB_ram_4208fc1c;
        goto LAB_ram_42090246;
      }
      puVar15 = &UNK_ram_3c0fda50;
    }
    else {
      puVar15 = &DAT_ram_3c0fda40;
    }
  }
  else {
    iVar8 = 0;
LAB_ram_4208fc68:
    iVar25 = iVar19;
    if ((cVar2 != '\0') && ((iVar19 == 0 && (*(int *)(param_2 + 100) != 0)))) {
      return 0xffffffff;
    }
LAB_ram_42090246:
    if ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x24);
    }
    iVar26 = *(int *)(*(int *)(param_1 + 4) + 4);
    if ((param_3 == 0) && ((_DAT_ram_3fcc41fc & 1) != 0)) {
      FUN_ram_4208f6b0(param_2);
    }
    iVar19 = *(int *)(param_2 + 0x5c);
    bVar22 = 0;
    if ((iVar19 != 0) && (8 < *(byte *)(iVar19 + 1))) {
      bVar22 = *(byte *)(iVar19 + 10) >> 6 & 1;
    }
    if (((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) == 0) ||
       (((char)_DAT_ram_3fcdfb20[0x26] != '\0' && ((cVar2 == '\0' || (iVar25 == 0)))))) {
LAB_ram_420902b0:
      iVar7 = 0;
    }
    else {
      iVar23 = iVar26 + 10;
      iVar19 = FUN_ram_4208f580(iVar23);
      puVar9 = _DAT_ram_3fcdfb20;
      if (iVar19 != 0) goto LAB_ram_420902b0;
      if ((((cVar2 != '\0') && (iVar25 != 0)) && (iVar8 != 0)) &&
         ((char)_DAT_ram_3fcdfb20[0x11] == '\x03')) {
        return 0xffffffff;
      }
      if (*(char *)((int)_DAT_ram_3fcdfb20 + 0x99) == '\x01') {
        iVar19 = *(int *)(param_2 + 0x24);
        if (*(char *)((int)_DAT_ram_3fcdfb20 + 0xa2) == '\x01') {
          if (((_DAT_ram_3fcdfb20[0x1d] == (uint)*(byte *)(iVar19 + 1)) &&
              (iVar19 = FUN_ram_4039c5aa(_DAT_ram_3fcdfb20 + 0x1e,iVar19 + 2), iVar19 == 0)) &&
             (iVar19 = FUN_ram_4039c0e0(puVar9 + 0x27,iVar23,6), iVar19 == 0)) {
            FUN_ram_4208e402(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
            FUN_ram_4207a038(1,8,5,
                             "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..." /* TRUNCATED STRING LITERAL */
                            );
            if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
              pcVar13 = 
              "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..." /* TRUNCATED STRING LITERAL */
              ;
              *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) =
                   *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
LAB_ram_4208fd46:
              FUN_ram_4207a038(1,8,5,pcVar13);
            }
LAB_ram_4208fd50:
            FUN_ram_4208db2c(_DAT_ram_3fcdfb20 + 0x1e,cVar1,
                             *(undefined1 *)(*(int *)(param_2 + 0x24) + 1),bVar22);
            goto LAB_ram_420902b2;
          }
        }
        else if ((_DAT_ram_3fcdfb20[0x1d] == (uint)*(byte *)(iVar19 + 1)) &&
                (iVar19 = FUN_ram_4039c5aa(_DAT_ram_3fcdfb20 + 0x1e,iVar19 + 2), iVar19 == 0)) {
          FUN_ram_4208e402(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
          FUN_ram_4207a038(1,8,5,
                           "AA8CAAAPMgABARkHH/4tAAABAgAIggAESwMBfQcNyggEAgAKMgAC8gABBgcU6iIADAIADzIAAV3/qqqqv/wIBAIADzIAAgGcAQQiAAwCAANmBgECAASWAAKTBAETAA8CAAAFJgABjQARqwgADzIAIAFjAwI9AA4CAAVYAAEcBgNkAAGYAgETAA8CAAAKMgAEIQES6sEEDwIAAg8yAAMBkgEPMAACDzIABQHQCg8yAAYBpQUBAgAFBQkBKwQBEwAPAgAACDIABpYCH6rIAAoGZAAFMgAPXgEMCTIAAg0AAVsED5EAAAMACQIlAAkNAAEhBAIUAA0CAAUZBAMyAAHDAQGVAA8sAQUPMgACAbsCDzIAEgOcCQFjAA8gAwYJZAAS/1oAAvgAD4QDBgj6ABH/cgUBYwAP6AMICTIAAfUBAcYAAUwEcv1VVVVX1X8XAVL//1VVW1gCNK///xYAQeqqqq+UAAIQEA0yABJVWgcHMgAh5WqKAQLPAA8yAAERX7sAFqtkABTVMgAC1gFU/qqVaquAAG///1WqlVsyAAYERQUl1X9OAG///1X/9VcyAAUUq+0A8RTVf//VflW//+VW////Vf/5V/+VW6qqlVb/1X/5W/5Vb/1VVcUABjQI9RHVf//VdVVv/1VVf///Vf/9V/1VVWqpVVV/1X/lX/VVVjIABGMAkf/Vf//VVVVb/fQA8wVV//1X9VVVWqVVVV/Vf5V/1VVV+WQAAvgAAJQRstV//9VW5Vf1W/lXlgDyAtVb5VqlVuVb1X9V/1V/lWqVLAECLgAEMgBhX/lX9V/9MgD0AfVX1X/1VpVa/VfVfVb/Vf8yAAQpAQOWAHJ//Vflb/5WXgHxAZV//VaVar1X1WVb/laqpVpkAAaUAAKWAPENf/1X5VVVVv//VVVVb5W//VaVaqqq1VVv6VVVVTIABVoBBzIAFNUyACO/VTIAT5VVWqkyABEkW/9kADWVVVYyAAl8AwH0AUL9V+Vv9AEZ/zIAQVaqqqrIAAKQAAICAAYyABOrMgDBf/lWlVqpVpVpVapVMgAGrQUBAgADMgAx9V/+XgHxBf//1W/1WpVapVaValVqVaqVapVvVAMBLQABAgADMgAz+ValMgBR5VZVXqUkAYWValVVVWqVWhcFAgIAAzIABCYCcv//+VVVf6kyAHFalVVVquVV/QcCLgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKc..." /* TRUNCATED STRING LITERAL */
                          );
          if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
            pcVar13 = 
            "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..." /* TRUNCATED STRING LITERAL */
            ;
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
            goto LAB_ram_4208fd46;
          }
          goto LAB_ram_4208fd50;
        }
        goto LAB_ram_420902b0;
      }
      if (*(char *)((int)_DAT_ram_3fcdfb20 + 0xa2) == '\x01') {
        iVar19 = FUN_ram_4039c0e0(_DAT_ram_3fcdfb20 + 0x27,iVar23,6);
        if (iVar19 == 0) {
          FUN_ram_4208e402(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
          FUN_ram_4207a038(1,8,5,
                           "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..." /* TRUNCATED STRING LITERAL */
                          );
          if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
            pcVar13 = 
            "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..." /* TRUNCATED STRING LITERAL */
            ;
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
            goto LAB_ram_4208fd46;
          }
          goto LAB_ram_4208fd50;
        }
        goto LAB_ram_420902b0;
      }
      FUN_ram_4208e402(iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17,bVar22);
    }
LAB_ram_420902b2:
    if (((_DAT_ram_3fcc4180 != (undefined4 *)0x0) &&
        (pcVar18 = (code *)*_DAT_ram_3fcc4180, pcVar18 != (code *)0x0)) &&
       (*(int *)(_DAT_ram_3fcdfaf0 + 4) != 0)) {
      FUN_ram_4208f736(param_2,aiStack_58);
      (*pcVar18)(aiStack_58);
    }
    pcVar18 = *(code **)(_DAT_ram_3fcc4178 + 0x54);
    if ((pcVar18 != (code *)0x0) && (iVar7 != 0)) {
      uVar21 = 0x50;
      if (param_3 == 0) {
        uVar21 = 0x80;
      }
      if (((1 << (uVar21 >> 4) & _DAT_ram_3fcc4228) != 0) ||
         ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) != 0)) {
        uVar5 = *(undefined2 *)(param_1 + 0x16);
        iVar7 = *(int *)(*(int *)(param_1 + 4) + 4);
        cVar3 = **(char **)(param_1 + 0x10);
        uVar4 = *(undefined1 *)(*(int *)(param_1 + 0x24) + 8);
        uVar27 = FUN_ram_40393f02(0);
        (*pcVar18)(uVar21 >> 4,iVar7 + 0x18,uVar5,iVar7 + 10,(int)cVar3,uVar4,(int)uVar27,
                   (int)((ulonglong)uVar27 >> 0x20));
      }
    }
    iVar7 = *(int *)(gp + -0xb4);
    if (*(uint *)(iVar7 + 4) + 1 < 2) {
      FUN_ram_4207a038(1,8,5,
                       "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..." /* TRUNCATED STRING LITERAL */
                      );
      return 0;
    }
    if ((char)_DAT_ram_3fcdfb20[0x11] == '\x03') {
      return 0;
    }
    if ((((cVar2 == '\0') || (iVar25 == 0)) &&
        ((iVar8 != 0 ||
         ((*(uint *)(iVar7 + 4) != (uint)*(byte *)(*(int *)(param_2 + 0x24) + 1) ||
          (iVar19 = FUN_ram_4039c0e0(iVar7 + 8,*(int *)(param_2 + 0x24) + 2), iVar19 != 0)))))) &&
       ((*(char *)(iVar7 + 0x92) == '\0' ||
        (iVar7 = FUN_ram_4039c0e0(iVar7 + 0x93,iVar26 + 0x10,6), iVar7 != 0)))) {
      if (iVar8 == 0) {
        return 0;
      }
      iVar12 = FUN_ram_4039c0e0(*(int *)(iVar12 + 0xe4) + 4,iVar26 + 0x10,6);
      if (iVar12 != 0) {
        return 0;
      }
    }
    if ((*(byte *)(_DAT_ram_3fcc4014 + 0x128) & 0xfb) != 1) {
      return 0;
    }
    pcVar13 = (char *)FUN_ram_4207f212();
    if (((*pcVar13 != '\0') || (_DAT_ram_3fcc417c != 0)) && ((*(ushort *)(param_2 + 6) & 0x10) == 0)
       ) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fdb9c);
      DAT_ram_3fcc3074 = 1;
      return 0xffffffff;
    }
    if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') {
      iVar12 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
      if (iVar12 == 0) goto LAB_ram_4208ff8c;
      if (1 < (byte)(DAT_ram_3fcc41bd - 0xbU)) {
        if (*(int *)(param_2 + 0x3c) == 0) {
          if (*(char *)(iVar12 + 0x33d) == '\0') {
LAB_ram_4208ff18:
            if (*(int *)(param_2 + 0x34) == 0) {
              if (*(char *)(iVar12 + 0x30) == '\0') {
LAB_ram_4208ff22:
                iVar12 = *(int *)(iVar12 + 0x338);
                if (*(int *)(param_2 + 0x68) == 0) {
                  if (iVar12 != 0) {
LAB_ram_4208ffc0:
                    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdb04);
                    goto LAB_ram_4208ff8c;
                  }
                }
                else if ((iVar12 == 0) ||
                        (*(char *)(*(int *)(param_2 + 0x68) + 2) != *(char *)(iVar12 + 2)))
                goto LAB_ram_4208ffc0;
                goto LAB_ram_4208ff2c;
              }
            }
            else if ((*(char *)(iVar12 + 0x30) != '\0') &&
                    (iVar7 = FUN_ram_4039c0e0(*(int *)(param_2 + 0x34),iVar12 + 0x33), iVar7 == 0))
            goto LAB_ram_4208ff22;
          }
        }
        else if ((*(char *)(iVar12 + 0x33d) != '\0') &&
                (iVar7 = FUN_ram_4039c0e0(*(int *)(param_2 + 0x3c),iVar12 + 0x33e), iVar7 == 0))
        goto LAB_ram_4208ff18;
LAB_ram_4208ff8c:
        puVar15 = &DAT_ram_3c0fdbcc;
        uVar14 = 4;
        goto LAB_ram_4208ff98;
      }
    }
LAB_ram_4208ff2c:
    if ((((cVar2 == '\0') || (iVar8 != 0)) || (iVar25 == 0)) ||
       (*(char *)(*(int *)(gp + -0xb4) + 0x35f) != '\0')) {
      iVar6 = iVar26 + 0x10;
    }
    else {
      iVar6 = iVar6 + 0x24;
    }
    iVar12 = FUN_ram_42086758(iVar6);
    iVar7 = FUN_ram_4208e592(iVar26,param_2,param_3);
    if ((DAT_ram_3fcc41bd != '\x0f') || (pcVar13 = (char *)FUN_ram_4207f212(), *pcVar13 == '\0')) {
      if (iVar7 == 0) {
        if (iVar12 != 0) {
          *(uint *)(iVar12 + 0xc) = *(uint *)(iVar12 + 0xc) & 0xfffffffb;
        }
      }
      else {
        if (iVar12 == 0) {
          iVar12 = FUN_ram_42086e3e(iVar26 + 0x10,iVar16,*(undefined1 *)(param_2 + 0x60));
          if (iVar12 == 0) {
            return 0xffffffff;
          }
          FUN_ram_42086262(iVar12,_DAT_ram_3fcc4014);
          *(undefined1 *)(iVar12 + 0x2f4) = 0;
          *(byte *)(iVar12 + 0x2f6) = bVar22;
          FUN_ram_42087078(iVar12,iVar16,2);
          FUN_ram_420870d8(iVar12,10,0);
          FUN_ram_4208717c(iVar12,5,0);
          FUN_ram_42087196(iVar12,param_2,iVar26);
          (*(code *)&SUB_ram_40010488)(iVar12 + 0x32c,0,6);
          if ((cVar2 != '\0') && (iVar25 != 0)) {
            FUN_ram_4208d35c(iVar12,iVar8);
          }
          FUN_ram_4207a942(iVar12,*(undefined1 *)(param_2 + 0x61),*(undefined1 *)(param_2 + 0x62));
          *(char *)(iVar12 + 0xab) = cVar1;
          *(undefined1 *)(iVar12 + 0xac) = 0;
          *(undefined1 *)(iVar12 + 0x28b) = *(undefined1 *)(param_2 + 0x60);
          *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 4);
          FUN_ram_420871c8(iVar12,param_2,param_3);
          *(bool *)(iVar12 + 0x28a) = *(char *)(param_2 + 0x54) != '\0';
          FUN_ram_42086864(iVar12);
          FUN_ram_4208df38(0x3fcc40d0,iVar26,param_2,iVar16,(int)*(short *)(param_1 + 0x18),uVar17);
          if ((*(char *)(*(int *)(gp + -0xb4) + 0x35c) == '\0') &&
             ((char)_DAT_ram_3fcdfb20[0x11] == '\x02')) {
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x38);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcdfb1c + 0x38,0,0);
          }
        }
        else {
          uVar4 = *(undefined1 *)(iVar12 + 0xab);
          *(char *)(iVar12 + 0xab) = cVar1;
          if (((cVar2 != '\0') && (iVar25 != 0)) && (iVar8 == 0)) {
            *(undefined1 *)(iVar12 + 0xab) = uVar4;
          }
          FUN_ram_42087078(iVar12,iVar16,2);
          if (((*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') && (_DAT_ram_3fcc4224 != 0)) &&
             (*(char *)(iVar12 + 0xa4) < _DAT_ram_3fcc4224)) {
            _DAT_ram_3fcc4224 = 0;
            aiStack_58[0] = (int)*(char *)(iVar12 + 0xa4);
            FUN_ram_4208344a(0x12,aiStack_58,4);
          }
          FUN_ram_420870d8(iVar12,6,1);
          FUN_ram_4208717c(iVar12,5,0);
          iVar7 = *(int *)(param_2 + 0x18);
          if (iVar7 != 0) {
            *(undefined1 *)(iVar12 + 0x2f) = *(undefined1 *)(iVar7 + 2);
            *(undefined1 *)(iVar12 + 0x2e) = *(undefined1 *)(iVar7 + 3);
          }
          *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 4);
          if ((cVar2 != '\0') && (iVar25 != 0)) {
            FUN_ram_4208d35c(iVar12,iVar8);
          }
          FUN_ram_420871c8(iVar12,param_2,param_3);
        }
        if (*(char *)(*(int *)(gp + -0xb4) + 0x92) != '\0') {
          iVar7 = *(int *)(gp + -0xb4) + 0x93;
          iVar6 = FUN_ram_4039c0e0(iVar7,iVar26 + 0x10,6);
          if ((iVar6 == 0) ||
             ((iVar25 != 0 && (iVar7 = FUN_ram_4039c0e0(iVar7,iVar12 + 4,6), iVar7 == 0)))) {
            *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
            FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdc28);
          }
        }
        if ((*_DAT_ram_3fcdfb20 & 0x400) != 0) {
          *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) | 4;
          FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdc44);
        }
        iVar7 = *(int *)(gp + -0xb4);
        *(byte *)(iVar12 + 10) = *(byte *)(iVar12 + 10) | 4;
        FUN_ram_4208db2c(iVar7 + 8,cVar1,*(undefined1 *)(iVar7 + 4),bVar22);
      }
      return 0;
    }
    puVar15 = &UNK_ram_3c0fdbf8;
  }
LAB_ram_4208fab2:
  uVar14 = 8;
LAB_ram_4208ff98:
  FUN_ram_4207a038(1,uVar14,4,puVar15);
  return 0xffffffff;
}


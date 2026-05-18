
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_ram_42024914(int param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  undefined *puVar12;
  uint uVar13;
  
  DAT_ram_3fcc5194 = 1;
  uVar13 = 0;
  do {
    if (param_2 <= uVar13) {
      puVar6 = (uint *)FUN_ram_4039c08e(1,0xc);
      iVar5 = _DAT_ram_3fcc5190;
      if (puVar6 == (uint *)0x0) {
LAB_ram_4202496e:
        thunk_FUN_ram_40390634(iVar5);
        _DAT_ram_3fcc5190 = 0;
        return (uint *)0x0;
      }
      bVar2 = *(byte *)(_DAT_ram_3fcc5190 + 3);
      iVar10 = (uint)bVar2 * 0xc;
      iVar8 = FUN_ram_4039c08e(1,iVar10);
      if (iVar8 == 0) {
        thunk_FUN_ram_40390634(puVar6);
        goto LAB_ram_4202496e;
      }
      bVar3 = *(byte *)(iVar5 + 2);
      if ((bVar3 & 1) == 0) {
        if ((bVar3 & 2) != 0) {
          uVar13 = 2;
          puVar12 = &pmpaddr18;
          goto LAB_ram_42024c86;
        }
        if ((bVar3 & 4) != 0) {
          uVar13 = 4;
          puVar12 = &pmpaddr19;
          goto LAB_ram_42024c86;
        }
        uVar13 = bVar3 & 8;
        if ((bVar3 & 8) != 0) {
          uVar13 = 8;
          puVar12 = &pmpaddr20;
          goto LAB_ram_42024c86;
        }
        if ((bVar3 & 0x20) == 0) {
          puVar12 = (undefined *)0x3c0;
          goto LAB_ram_42024c86;
        }
        uVar13 = 0x20;
      }
      else {
        uVar13 = 1;
      }
      puVar12 = &pmpaddr17;
LAB_ram_42024c86:
      *puVar6 = uVar13;
      *(undefined **)(puVar6 + 1) = puVar12;
      *(byte *)((int)puVar6 + 6) = bVar2;
      uVar13 = FUN_ram_4039c11e(iVar8,iVar5 + 4,iVar10);
      puVar6[2] = uVar13;
      thunk_FUN_ram_40390634(iVar5);
      _DAT_ram_3fcc5190 = 0;
      return puVar6;
    }
    puVar7 = (undefined1 *)thunk_FUN_ram_403904a6(8);
    if (puVar7 == (undefined1 *)0x0) {
      return (uint *)0x0;
    }
    uVar9 = (uint)*(byte *)(param_1 + uVar13);
    *(undefined4 *)(puVar7 + 4) = 0;
    uVar4 = uVar9 & 0xfc;
    *puVar7 = (char)uVar4;
    uVar9 = uVar9 & 3;
    if (uVar9 == 3) {
      uVar9 = 4;
    }
    puVar7[1] = (char)uVar9;
    if ((param_2 - 1) - uVar13 < uVar9) {
      thunk_FUN_ram_40390634(puVar7);
      return (uint *)0x0;
    }
    FUN_ram_4039c11e(puVar7 + 4,(byte *)(param_1 + uVar13) + 1);
    uVar13 = uVar13 + uVar9 + 1;
    if (_DAT_ram_3fcc519c == 2) {
      if ((uVar4 == 0xa0) && (*(int *)(puVar7 + 4) == 1)) {
        DAT_ram_3fcc1bc8 = 0;
        DAT_ram_3fcc519a = '\x01';
        _DAT_ram_3fcc519c = 3;
        goto LAB_ram_42024a3c;
      }
LAB_ram_42024a5a:
      _DAT_ram_3fcc519c = 0;
LAB_ram_42024a5e:
      iVar5 = -1;
    }
    else {
      if (_DAT_ram_3fcc519c < 3) {
        if (_DAT_ram_3fcc519c == 0) {
          if (uVar4 != 4) goto LAB_ram_42024a5e;
          _DAT_ram_3fcc5198 = 0;
          _DAT_ram_3fcc5196 = 0;
          (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcc1bc2,0,0xe);
          _DAT_ram_3fcc1bc0 = CONCAT22(_DAT_ram_3fcc1bc2,(short)*(undefined4 *)(puVar7 + 4));
          _DAT_ram_3fcc519c = 1;
        }
        else {
          if (uVar4 != 8) goto LAB_ram_42024a5a;
          _DAT_ram_3fcc519c = 2;
          _DAT_ram_3fcc1bc0 = CONCAT22((short)*(undefined4 *)(puVar7 + 4),_DAT_ram_3fcc1bc0);
        }
      }
      else if (_DAT_ram_3fcc519c == 3) {
        if (uVar4 == 0x84) {
          uVar4 = *(uint *)(puVar7 + 4);
          if (((DAT_ram_3fcc1bc8 != 0) && (DAT_ram_3fcc1bc8 != uVar4)) &&
             (((_DAT_ram_3fcc1bca | _DAT_ram_3fcc1bcc | _DAT_ram_3fcc1bce) & 7) == 0)) {
            iVar5 = FUN_ram_42024710(DAT_ram_3fcc5194);
            if (iVar5 != 0) goto LAB_ram_42024a5a;
            DAT_ram_3fcc5194 = 0;
            _DAT_ram_3fcc1bca = 0;
            _DAT_ram_3fcc1bcc = 0;
            _DAT_ram_3fcc1bc0 = _DAT_ram_3fcc1bc4;
          }
          DAT_ram_3fcc1bc8 = (byte)uVar4;
        }
        else if (uVar4 == 4) {
          _DAT_ram_3fcc1bc4 = CONCAT22(_DAT_ram_3fcc1bc6,(short)*(undefined4 *)(puVar7 + 4));
        }
        else if (uVar4 == 8) {
          _DAT_ram_3fcc1bc4 = CONCAT22((short)*(undefined4 *)(puVar7 + 4),_DAT_ram_3fcc1bc4);
        }
        else if (uVar4 == 0x74) {
          _DAT_ram_3fcc5198 = (short)*(undefined4 *)(puVar7 + 4);
        }
        else if (uVar4 == 0x94) {
          _DAT_ram_3fcc5196 = (short)*(undefined4 *)(puVar7 + 4);
        }
        else if (uVar4 == 0x80) {
          _DAT_ram_3fcc1bca = _DAT_ram_3fcc5198 * _DAT_ram_3fcc5196 + _DAT_ram_3fcc1bca;
        }
        else if (uVar4 == 0x90) {
          _DAT_ram_3fcc1bcc =
               CONCAT22(_DAT_ram_3fcc1bce,_DAT_ram_3fcc5198 * _DAT_ram_3fcc5196 + _DAT_ram_3fcc1bcc)
          ;
        }
        else if (uVar4 == 0xb0) {
          _DAT_ram_3fcc1bcc =
               CONCAT22(_DAT_ram_3fcc5198 * _DAT_ram_3fcc5196 + _DAT_ram_3fcc1bce,_DAT_ram_3fcc1bcc)
          ;
        }
        else if (uVar4 == 0xa0) {
          DAT_ram_3fcc519a = DAT_ram_3fcc519a + '\x01';
        }
        else if ((uVar4 == 0xc0) &&
                (cVar11 = DAT_ram_3fcc519a + -1, bVar1 = DAT_ram_3fcc519a == '\x01',
                DAT_ram_3fcc519a = cVar11, bVar1)) {
          if (((_DAT_ram_3fcc1bca | _DAT_ram_3fcc1bcc | _DAT_ram_3fcc1bce) & 7) == 0) {
            iVar5 = FUN_ram_42024710(DAT_ram_3fcc5194);
            if (iVar5 != 0) goto LAB_ram_42024a5a;
            DAT_ram_3fcc5194 = 0;
          }
          goto LAB_ram_42024a50;
        }
      }
      else {
LAB_ram_42024a50:
        _DAT_ram_3fcc519c = 0;
      }
LAB_ram_42024a3c:
      iVar5 = 0;
    }
    thunk_FUN_ram_40390634(puVar7);
    if (iVar5 != 0) {
      return (uint *)0x0;
    }
  } while( true );
}



int FUN_ram_4205c9b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *apiStack_34 [3];
  int *piStack_28;
  undefined4 uStack_24;
  
  iVar1 = -1;
  apiStack_34[0] = param_1;
  while( true ) {
    if (apiStack_34[0][3] != 0) {
      FUN_ram_4205b9da();
    }
    uVar4 = apiStack_34[0][0x20];
    if (uVar4 == 3) break;
    if (uVar4 < 4) {
      if (uVar4 == 1) {
        iVar1 = FUN_ram_4205bd8e();
        if (iVar1 != 0) {
          if (((char)apiStack_34[0][0x31] != '\0') && (iVar1 == 0x7006)) {
            return 0x7007;
          }
          goto LAB_ram_4205caa6;
        }
      }
      else if (uVar4 != 2) goto LAB_ram_4205c9fc;
      iVar1 = FUN_ram_4205c6a2(apiStack_34[0],apiStack_34[0][0x11]);
      if (iVar1 == 0) break;
      goto LAB_ram_4205ca9a;
    }
    if (uVar4 == 4) {
LAB_ram_4205cad6:
      *(byte *)(apiStack_34[0] + 0x37) = *(byte *)(apiStack_34[0] + 0x37) & 0xfe;
      lVar6 = FUN_ram_4205bc48();
      if (lVar6 < 0) {
        if (((char)apiStack_34[0][0x31] != '\0') &&
           (piVar3 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar3 == 0xb)) {
          return 0x7007;
        }
        if (lVar6 == -0x7007) {
          return 0x7007;
        }
        *(byte *)(apiStack_34[0] + 0x37) = *(byte *)(apiStack_34[0] + 0x37) | 1;
        iVar1 = FUN_ram_4206cb20(apiStack_34[0][7]);
        piVar3 = apiStack_34[0];
        if (iVar1 == 0x80) {
          FUN_ram_4205bd42(apiStack_34[0]);
          piVar3 = apiStack_34[0];
          uVar2 = FUN_ram_4206cb16(apiStack_34[0][7]);
          FUN_ram_4205b802(piVar3,0,uVar2,0);
          FUN_ram_4205b4f6(0,apiStack_34,4);
          iVar1 = 0x7008;
        }
        else {
          uVar2 = FUN_ram_4206cb16(apiStack_34[0][7]);
          FUN_ram_4205b802(piVar3,0,uVar2,0);
          FUN_ram_4205b4f6(0,apiStack_34,4);
          iVar1 = 0x7004;
        }
        return iVar1;
      }
LAB_ram_4205ca10:
      piVar3 = apiStack_34[0];
      *(byte *)(apiStack_34[0] + 0x37) = *(byte *)(apiStack_34[0] + 0x37) | 1;
      iVar1 = *(int *)(apiStack_34[0][9] + 8);
      if (iVar1 - 200U < 100) {
        *apiStack_34[0] = 0;
      }
      else {
        if (apiStack_34[0][1] <= *apiStack_34[0]) {
          iVar1 = 0x7001;
          goto LAB_ram_4205caa6;
        }
        if (iVar1 < 0x135) {
          if ((0x132 < iVar1) || (iVar1 - 0x12dU < 3)) {
            if ((char)apiStack_34[0][0x25] == '\0') {
              iVar1 = FUN_ram_4205c66c(apiStack_34[0]);
              if (iVar1 != 0) {
                iVar1 = -1;
                goto LAB_ram_4205caa6;
              }
            }
            else {
              FUN_ram_4205b802(apiStack_34[0],7,0,0);
            }
            uStack_24 = *(undefined4 *)(piVar3[9] + 8);
            piStack_28 = piVar3;
            FUN_ram_4205b4f6(7,&piStack_28,8);
          }
        }
        else if ((iVar1 == 0x191) && (iVar1 = FUN_ram_4205c970(apiStack_34[0]), iVar1 != 0))
        goto LAB_ram_4205caa6;
      }
      do {
        if ((*(char *)(apiStack_34[0][9] + 0x2c) == '\0') || ((char)apiStack_34[0][0x1f] != '\0'))
        goto LAB_ram_4205ca58;
        iVar1 = FUN_ram_4205b708();
      } while (0 < iVar1);
      if (((char)apiStack_34[0][0x31] != '\0') &&
         (piVar3 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar3 == 0xb)) {
        return 0x7007;
      }
      if ((apiStack_34[0][0x1b] == 5) || ((char)apiStack_34[0][0x1f] != '\0')) {
LAB_ram_4205ca58:
        iVar1 = 0;
      }
      else {
        iVar1 = 0x700c;
      }
      do {
        iVar5 = apiStack_34[0][9];
        if ((*(int *)(iVar5 + 0x14) <= *(int *)(iVar5 + 0x24)) &&
           ((*(int *)(iVar5 + 0x14) != *(int *)(iVar5 + 0x24) ||
            (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar5 + 0x20))))) goto LAB_ram_4205cc8a;
        iVar5 = FUN_ram_4205b708(apiStack_34[0]);
      } while (0 < iVar5);
      if (((char)apiStack_34[0][0x31] != '\0') &&
         (piVar3 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar3 == 0xb)) {
        return 0x7007;
      }
      if (apiStack_34[0][0x1b] == 5) {
LAB_ram_4205cc8a:
        if (iVar1 != 0) goto LAB_ram_4205cccc;
        FUN_ram_4205b802(apiStack_34[0],5,0,0);
        FUN_ram_4205b4f6(5,apiStack_34,4);
        iVar1 = 0;
      }
      else {
        iVar5 = apiStack_34[0][9];
        if ((*(int *)(iVar5 + 0x14) <= *(int *)(iVar5 + 0x24)) &&
           ((*(int *)(iVar5 + 0x14) != *(int *)(iVar5 + 0x24) ||
            (*(uint *)(iVar5 + 0x10) <= *(uint *)(iVar5 + 0x20))))) goto LAB_ram_4205cc8a;
LAB_ram_4205cccc:
        piVar3 = apiStack_34[0];
        iVar1 = 0x700c;
        uVar2 = FUN_ram_4206cb16(apiStack_34[0][7]);
        FUN_ram_4205b802(piVar3,0,uVar2,0);
        FUN_ram_4205b4f6(0,apiStack_34,4);
      }
      iVar5 = apiStack_34[0][4];
      *(undefined4 *)(*(int *)(apiStack_34[0][9] + 4) + 0x10) = 0;
      iVar5 = FUN_ram_420696aa(iVar5);
      if (iVar5 == 0) {
        FUN_ram_4205bd42(apiStack_34[0]);
      }
      else if (2 < (uint)apiStack_34[0][0x20]) {
        apiStack_34[0][0x20] = 2;
        *(undefined1 *)(apiStack_34[0] + 0x2f) = 0;
      }
    }
    else if (uVar4 == 6) goto LAB_ram_4205ca10;
LAB_ram_4205c9fc:
    if (apiStack_34[0][3] == 0) {
      return iVar1;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  piVar3 = apiStack_34[0];
  if (apiStack_34[0][0x20] == 3) {
    if ((apiStack_34[0][0xc] == 0) || (apiStack_34[0][0x11] == 0)) {
LAB_ram_4205cad2:
      piVar3[0x20] = 4;
      goto LAB_ram_4205cad6;
    }
    iVar1 = FUN_ram_4205bcec(apiStack_34[0],apiStack_34[0][0x2d] + apiStack_34[0][0xc],
                             apiStack_34[0][0x2e]);
    if (-1 < iVar1) {
      iVar5 = piVar3[0x2e];
      piVar3[0x2e] = iVar5 - iVar1;
      piVar3[0x2d] = piVar3[0x2d] + iVar1;
      if (iVar5 - iVar1 < 1) goto LAB_ram_4205cad2;
      iVar1 = 0x7003;
    }
  }
  else {
    iVar1 = 0x103;
  }
LAB_ram_4205ca9a:
  if (((char)apiStack_34[0][0x31] != '\0') &&
     (piVar3 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar3 == 0xb)) {
    return 0x7007;
  }
LAB_ram_4205caa6:
  piVar3 = apiStack_34[0];
  uVar2 = FUN_ram_4206cb16(apiStack_34[0][7]);
  FUN_ram_4205b802(piVar3,0,uVar2,0);
  FUN_ram_4205b4f6(0,apiStack_34,4);
  return iVar1;
}


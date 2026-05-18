
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42040438(byte *param_1,undefined1 param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x39c))(param_1 + 2);
  if (iVar2 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x700d,0);
    return 0;
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x3cc))();
  if (iVar2 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x700e,0);
    return 0;
  }
  uVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x814))(param_1 + 0xe);
  *(undefined4 *)(iVar2 + 0x6c) = uVar3;
  *(uint *)(iVar2 + 0x70) = (uint)*(uint3 *)(param_1 + 0x12);
  iVar4 = _DAT_ram_3fcdfecc;
  *(byte *)(iVar2 + 0x4f) = param_1[0x15];
  uVar1 = (**(code **)(iVar4 + 0x80c))(param_1 + 0x16);
  iVar4 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(iVar2 + 0x8e) = uVar1;
  uVar1 = (**(code **)(iVar4 + 0x80c))(param_1 + 0x18);
  iVar4 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(iVar2 + 0x84) = uVar1;
  uVar1 = (**(code **)(iVar4 + 0x80c))(param_1 + 0x1a);
  iVar4 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(iVar2 + 0x86) = uVar1;
  uVar1 = (**(code **)(iVar4 + 0x80c))(param_1 + 0x1c);
  *(undefined2 *)(iVar2 + 0x88) = uVar1;
  FUN_ram_4039c11e(iVar2 + 0x2f,param_1 + 0x1e,5);
  iVar4 = _DAT_ram_3fcdff6c;
  *(byte *)(iVar2 + 0x3e) = param_1[0x23] & 0x1f;
  uVar8 = (uint)*(ushort *)(iVar2 + 0x84);
  uVar7 = (uint)*(ushort *)(iVar2 + 0x8e);
  *(byte *)(iVar2 + 0x4c) = param_1[0x23] >> 5;
  *(undefined1 *)(iVar2 + 0x4d) = *(undefined1 *)(iVar4 + 0xc);
  if (((uVar7 <= uVar8) && (uVar7 = 0xc7a, (uVar8 - 6 & 0xffff) < 0xc7b)) &&
     (uVar6 = (uint)*(byte *)(iVar2 + 0x4f), uVar6 != 0)) {
    uVar7 = 499;
    if (*(ushort *)(iVar2 + 0x86) < 500) {
      uVar7 = (uint)*(ushort *)(iVar2 + 0x88) * 10000;
      if ((*(ushort *)(iVar2 + 0x86) + 1) * uVar8 * 0x9c4 < uVar7) {
        uVar8 = uVar8 - 1;
        if (8 < (int)uVar8) {
          uVar8 = 8;
        }
        if (uVar8 < uVar6) {
          (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                    (0x700f,3,uVar6,uVar7,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
        }
        else {
          FUN_ram_4039c11e(iVar2 + 0xb3,param_1 + 2,6);
          iVar4 = _DAT_ram_3fcdfecc;
          *(undefined1 *)(iVar2 + 0xb2) = param_2;
          uVar7 = (**(code **)(iVar4 + 0x4d4))(iVar2 + 0x2f);
          *(char *)(iVar2 + 0x41) = (char)uVar7;
          iVar4 = _DAT_ram_3fcdfecc;
          if (uVar7 < 2) {
            (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x700f,4,uVar7);
          }
          else {
            if ((byte)(*(char *)(iVar2 + 0x3e) - 5U) < 0xc) {
              *(undefined1 *)(iVar2 + 0xb) = 2;
              (**(code **)(iVar4 + 0x3d0))(iVar2);
              (**(code **)(_DAT_ram_3fcdfecc + 0x390))(iVar2,(int)*(char *)(param_3 + 4));
              iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
              if (*(char *)(iVar4 + 99) == '\0') {
                (**(code **)(_DAT_ram_3fcdfecc + 0x3b8))(iVar2,0);
              }
              else {
                if (param_4 == 0) {
                  param_4 = *param_1 >> 5 & 1;
                }
                (**(code **)(_DAT_ram_3fcdfecc + 0x3b8))(iVar2,param_4);
              }
              iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x364))(iVar2,param_3,param_1);
              iVar4 = _DAT_ram_3fcdff64;
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar5 = *(int *)(_DAT_ram_3fcdff64 + 0x20);
              if (*(int *)(_DAT_ram_3fcdff64 + 0x20) == iVar2) {
                *(undefined4 *)(_DAT_ram_3fcdff64 + 0x20) = *(undefined4 *)(iVar2 + 0xec);
              }
              else {
                do {
                  iVar9 = iVar5;
                  iVar5 = *(int *)(iVar9 + 0xec);
                } while (iVar5 != iVar2);
                *(undefined4 *)(iVar9 + 0xec) = *(undefined4 *)(iVar2 + 0xec);
              }
              piVar10 = *(int **)(iVar4 + 0x28);
              *(undefined4 *)(iVar2 + 0xec) = 0;
              *piVar10 = iVar2;
              *(int *)(iVar4 + 0x28) = iVar2 + 0xec;
              return 0;
            }
            (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x700f,5);
          }
        }
      }
      else {
        (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x700f,1);
      }
      goto LAB_ram_420405c2;
    }
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
            (0x700f,0,0,uVar7,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
LAB_ram_420405c2:
  iVar4 = _DAT_ram_3fcdff64;
  *(undefined4 *)(iVar2 + 0xec) = 0;
  **(int **)(iVar4 + 0x28) = iVar2;
  *(int *)(iVar4 + 0x28) = iVar2 + 0xec;
  return 0;
}


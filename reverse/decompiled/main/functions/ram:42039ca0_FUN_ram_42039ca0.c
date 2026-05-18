
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42039ca0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x7cc))
                    (param_3 & 0xff,param_2,*(code **)(_DAT_ram_3fcdfecc + 0x7cc));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x778))(param_3);
    if (iVar1 == 0) {
      return 0xc;
    }
    return 0x10c;
  }
  if (param_3 == 0x2d) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1b0))(param_1,param_2);
  }
  else if (param_3 < 0x2e) {
    if (param_3 == 0x17) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x77c))(param_1,param_2,param_4,param_5);
    }
    else if (param_3 < 0x18) {
      if (param_3 == 0xc) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x264))(param_1,param_2);
      }
      else if (param_3 < 0xd) {
        if (param_3 == 6) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x5b0))(param_1,param_2);
        }
        else if (param_3 < 7) {
          if (param_3 == 2) {
            if (param_2 != 0) goto LAB_ram_4203a1fc;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x78c))(param_4,param_5);
          }
          else if (param_3 < 3) {
            if (param_3 != 1) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x7bc))(param_1,param_2);
          }
          else if (param_3 == 3) {
            if (param_2 != 0) goto LAB_ram_4203a1fc;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x790))(param_4,param_5);
          }
          else {
            if (param_3 != 5) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xf0))
                              (param_1,param_2,*(int *)(_DAT_ram_3fcdff60 + 4) == 2);
          }
        }
        else if (param_3 == 9) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x61c))(param_1,param_2);
        }
        else if (param_3 < 10) {
          if (param_3 == 7) {
            if (param_2 != 0) goto LAB_ram_4203a1fc;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x584))(param_4,param_5);
          }
          else {
            if (param_3 != 8) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x618))(param_1,param_2);
          }
        }
        else if (param_3 == 10) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x614))(param_1,param_2);
        }
        else {
          if (param_3 != 0xb) goto LAB_ram_4203a68e;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x328))(param_1,param_2);
        }
      }
      else if (param_3 == 0x11) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x23c))(param_1,param_2);
      }
      else if (param_3 < 0x12) {
        if (param_3 == 0xe) {
          if (param_2 != 0) goto LAB_ram_4203a1fc;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x128))(param_6);
        }
        else if (param_3 < 0xe) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x124))(param_1,param_2);
        }
        else if (param_3 == 0xf) {
          if (param_2 != 0) goto LAB_ram_4203a1fc;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x248))(param_4,param_5);
        }
        else {
          if (param_3 != 0x10) goto LAB_ram_4203a68e;
          if (param_2 != 0) goto LAB_ram_4203a1fc;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x244))();
        }
      }
      else if (param_3 == 0x14) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x170))(param_1,param_2);
      }
      else if (param_3 < 0x15) {
        if (param_3 == 0x12) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x24c))(param_1,param_2);
        }
        else {
          if (param_3 != 0x13) goto LAB_ram_4203a68e;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x178))(param_1,param_2);
        }
      }
      else if (param_3 == 0x15) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x160))(param_1,param_2,param_4,param_5);
      }
      else {
        if (param_3 != 0x16) goto LAB_ram_4203a68e;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x16c))(param_1,param_2);
      }
    }
    else if (param_3 == 0x22) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x174))(param_1,param_2,param_4,param_5);
    }
    else if (param_3 < 0x23) {
      if (param_3 == 0x1c) {
        if (param_2 != 0) goto LAB_ram_4203a1fc;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x794))(param_4,param_5);
      }
      else if (param_3 < 0x1d) {
        if (param_3 == 0x19) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x150))(param_1,param_2);
        }
        else if (param_3 < 0x19) {
          if (param_2 != 0) goto LAB_ram_4203a1fc;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x780))(param_4,param_5);
        }
        else if (param_3 == 0x1a) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x144))(param_1,param_2,param_4,param_5);
        }
        else {
          if (param_3 != 0x1b) goto LAB_ram_4203a68e;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x140))(param_1,param_2,param_4,param_5);
        }
      }
      else if (param_3 == 0x1f) {
        if (param_2 != 0) goto LAB_ram_4203a1fc;
        iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x318))(param_4,param_5);
      }
      else if (param_3 < 0x20) {
        if (param_3 == 0x1d) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x340))(param_1,param_2);
        }
        else {
          if (param_3 != 0x1e) goto LAB_ram_4203a68e;
          iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x338))(param_1,param_2);
        }
      }
      else if (param_3 == 0x20) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x158))(param_1,param_2,param_4,param_5);
      }
      else {
        if (param_3 != 0x21) goto LAB_ram_4203a68e;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x154))(param_1,param_2,param_4,param_5);
      }
    }
    else if (param_3 == 0x27) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1e0))(param_1,param_2);
    }
    else if (param_3 < 0x28) {
      if (param_3 == 0x24) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x79c))(param_1,param_2);
      }
      else if (param_3 < 0x24) {
        if (param_2 != 0) goto LAB_ram_4203a1fc;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x788))(param_4,param_5);
      }
      else if (param_3 == 0x25) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa54))(param_6);
      }
      else {
        if (param_3 != 0x26) goto LAB_ram_4203a68e;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa60))(param_1,param_2,param_6);
      }
    }
    else if (param_3 == 0x2a) {
      if (param_2 != 0) goto LAB_ram_4203a1fc;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1f0))(param_4,param_5);
    }
    else if (param_3 < 0x2b) {
      if (param_3 == 0x28) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1f8))(param_1,param_2);
      }
      else {
        if (param_3 != 0x29) goto LAB_ram_4203a68e;
        if (param_2 != 0) goto LAB_ram_4203a1fc;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1e8))();
      }
    }
    else if (param_3 == 0x2b) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x200))(param_1,param_2,param_4,param_5);
    }
    else {
      if (param_3 != 0x2c) goto LAB_ram_4203a68e;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1fc))(param_1,param_2,param_4,param_5);
    }
  }
  else if (param_3 == 0x43) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x18c))(param_1,param_2);
  }
  else if (param_3 < 0x44) {
    if (param_3 == 0x38) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x538))(param_1,param_2);
    }
    else {
      if (param_3 < 0x39) {
        if (param_3 == 0x32) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x14c))(param_1,param_2);
          goto LAB_ram_42039d36;
        }
        if (param_3 < 0x33) {
          if (param_3 == 0x2f) {
            if (param_2 != 0) goto LAB_ram_4203a1fc;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x784))(param_4,param_5);
          }
          else if (param_3 < 0x2f) {
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x21c))(param_1,param_2);
          }
          else if (param_3 == 0x30) {
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x148))(param_1,param_2,param_4,param_5);
          }
          else {
            if (param_3 != 0x31) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x798))(param_1,param_2);
          }
          goto LAB_ram_42039d36;
        }
        if (param_3 == 0x35) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x554))(param_1,param_2);
          goto LAB_ram_42039d36;
        }
        if (0x35 < param_3) {
          if (param_3 == 0x36) {
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x534))(param_1,param_2,param_4,param_5);
          }
          else {
            if (param_3 != 0x37) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x52c))(param_1,param_2);
          }
          goto LAB_ram_42039d36;
        }
        if (param_3 == 0x33) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x344))(param_1,param_2);
          goto LAB_ram_42039d36;
        }
        iVar1 = _DAT_ram_3fcdfed0;
        if (param_3 != 0x34) goto LAB_ram_4203a68e;
      }
      else {
        if (param_3 == 0x3d) {
          if (param_2 != 0) goto LAB_ram_4203a1fc;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x518))();
          goto LAB_ram_42039d36;
        }
        if (param_3 < 0x3e) {
          if (param_3 == 0x3a) {
            if (param_2 != 0) goto LAB_ram_4203a1fc;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x71c))(param_4,param_5);
          }
          else if (param_3 < 0x3a) {
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x530))(param_1,param_2);
          }
          else if (param_3 == 0x3b) {
            if (param_2 != 0) goto LAB_ram_4203a1fc;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x720))(param_4,param_5);
          }
          else {
            if (param_3 != 0x3c) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x588))(param_1,param_2);
          }
          goto LAB_ram_42039d36;
        }
        if (param_3 == 0x40) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x568))(param_1,param_2);
          goto LAB_ram_42039d36;
        }
        if (param_3 < 0x41) {
          if (param_3 == 0x3e) {
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x578))(param_1,param_2);
          }
          else {
            if (param_3 != 0x3f) goto LAB_ram_4203a68e;
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x570))(param_1,param_2);
          }
          goto LAB_ram_42039d36;
        }
        iVar1 = _DAT_ram_3fcdfecc;
        if (param_3 != 0x41) {
          if (param_3 != 0x42) goto LAB_ram_4203a68e;
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x268))(param_1,param_2);
          goto LAB_ram_42039d36;
        }
      }
      iVar1 = (**(code **)(iVar1 + 0x33c))(param_1,param_2);
    }
  }
  else if (param_3 == 0x4e) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1b8))(param_1,param_2);
  }
  else if (param_3 < 0x4f) {
    if (param_3 == 0x48) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x680))(param_1,param_2);
    }
    else if (param_3 < 0x49) {
      if (param_3 == 0x45) {
        if (param_2 != 0) goto LAB_ram_4203a1fc;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x630))(param_6);
      }
      else if (param_3 < 0x45) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x640))(param_1,param_2);
      }
      else if (param_3 == 0x46) {
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x6cc))(param_1,param_2);
      }
      else {
        if (param_3 != 0x47) goto LAB_ram_4203a68e;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x670))(param_1,param_2);
      }
    }
    else if (param_3 == 0x4b) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x7d4))(param_4,param_5);
    }
    else if (param_3 < 0x4c) {
      if (param_3 == 0x49) {
        if (param_2 != 0) {
LAB_ram_4203a1fc:
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x778))(param_3);
          if (iVar1 != 0) {
            return 0x112;
          }
          return 0x12;
        }
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x674))();
      }
      else {
        if (param_3 != 0x4a) goto LAB_ram_4203a68e;
        if (param_2 != 0) goto LAB_ram_4203a1fc;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x688))(param_4,param_5);
      }
    }
    else if (param_3 == 0x4c) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 2000))(param_4,param_5);
    }
    else {
      if (param_3 != 0x4d) goto LAB_ram_4203a68e;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x7d8))(param_1,param_2);
    }
  }
  else if (param_3 == 0x5d) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x194))(param_1,param_2);
  }
  else if (param_3 < 0x5e) {
    if (param_3 == 0x5a) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x6d0))(param_1,param_2,param_4,param_5);
    }
    else if (param_3 < 0x5b) {
      if (param_3 != 0x59) {
LAB_ram_4203a68e:
        (**(code **)(_DAT_ram_3fcdfecc + 0x778))(param_3);
        return 0x101;
      }
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa68))(param_1,param_2);
    }
    else if (param_3 == 0x5b) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x574))(param_1,param_2,param_4,param_5);
    }
    else {
      if (param_3 != 0x5c) goto LAB_ram_4203a68e;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x198))(param_1,param_2,param_4,param_5);
    }
  }
  else if (param_3 == 0x6d) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa2c))
                      (param_1,param_2,param_4,param_5,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa2c))
    ;
  }
  else if (param_3 < 0x6e) {
    if (param_3 == 0x5e) {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa5c))(param_1,param_2,param_6);
    }
    else {
      if (param_3 != 0x5f) goto LAB_ram_4203a68e;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xa40))(param_1,param_2,param_6);
    }
  }
  else if (param_3 == 0x74) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xe8))(param_1,param_2);
  }
  else {
    if (param_3 != 0x7c) goto LAB_ram_4203a68e;
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xab0))(param_1,param_2);
  }
LAB_ram_42039d36:
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x778))(param_3);
  if (iVar2 == 0) {
    if (iVar1 == 1) {
      iVar1 = 0x101;
    }
  }
  else {
    iVar1 = iVar1 + 0x100;
  }
  return iVar1;
}


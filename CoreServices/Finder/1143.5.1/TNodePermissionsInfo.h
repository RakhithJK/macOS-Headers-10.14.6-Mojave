//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface TNodePermissionsInfo : NSObject <NSCopying>
{
    struct TFENode _node;
    struct FSPermissionInfo _permissionsInfo;
    struct TRef<__FSFileSecurity *, TRetainReleasePolicy<FSFileSecurityRef>> _fileSecurityRef;
    struct TRef<const __CFArray *, TRetainReleasePolicy<CFArrayRef>> _permissionsArray;
}

+ (_Bool)findFirstUserGroupInPermissionsArray:(struct __CFArray *)arg1 node:(const struct TFENode *)arg2 findUser:(_Bool)arg3 foundidentity:(struct TIdentity *)arg4;
+ (_Bool)isInPermissionsArray:(struct __CFArray *)arg1 node:(const struct TFENode *)arg2 uuid:(struct __CFUUID *)arg3 aci:(const struct TAccessControlInfo *)arg4;
+ (_Bool)removeFromPermissionsArray:(struct __CFArray *)arg1 node:(const struct TFENode *)arg2 uuid:(struct __CFUUID *)arg3 aci:(const struct TAccessControlInfo *)arg4;
+ (_Bool)addToPermissionsArray:(struct __CFArray *)arg1 node:(const struct TFENode *)arg2 uuid:(struct __CFUUID *)arg3 isPOSIXOwner:(_Bool)arg4 isPOSIXGroup:(_Bool)arg5 aci:(const struct TAccessControlInfo *)arg6;
+ (_Bool)updatePermissionsArray:(struct __CFArray *)arg1 node:(const struct TFENode *)arg2 uuid:(struct __CFUUID *)arg3 from:(const struct TAccessControlInfo *)arg4 to:(const struct TAccessControlInfo *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CFArray *)mutableCopyPermissionsArray;
- (struct __CFArray *)copyPermissionsArray;
- (struct __CFArray *)permissionsArray;
- (struct __FSFileSecurity *)fileSecurityRef;
- (unsigned int)userAccess;
- (unsigned int)groupID;
- (unsigned int)userID;
- (const struct FSPermissionInfo *)permissionsInfo;
- (const struct TFENode *)node;
- (int)updateFromPermissionsArray:(struct __CFArray *)arg1 newOwner:(unsigned int)arg2 newGroup:(unsigned int)arg3 vRefNum:(short)arg4 isContainer:(_Bool)arg5;
- (_Bool)removeIdentity:(const struct TIdentity *)arg1 aci:(const struct TAccessControlInfo *)arg2;
- (_Bool)addIdentity:(const struct TIdentity *)arg1;
- (_Bool)updateIdentity:(const struct TIdentity *)arg1 from:(const struct TAccessControlInfo *)arg2 to:(const struct TAccessControlInfo *)arg3;
- (_Bool)changeGroupTo:(const struct TIdentity *)arg1;
- (_Bool)changeOwnerTo:(const struct TIdentity *)arg1;
- (_Bool)changeOwnerOrGroupTo:(const struct TIdentity *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNode:(const struct TFENode *)arg1 permissionsInfo:(const struct FSPermissionInfo *)arg2 permissionsArray:(struct __CFArray *)arg3;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TTableViewItem.h"

@interface TPrivilegesTableViewItem : TTableViewItem
{
    struct TIdentity _identity;
    struct TNSRef<NSImage, void> _icon;
    struct TAccessControlInfo _accessControlInfo;
    int _type;
    _Bool _isOwner;
}

+ (id)unknownIcon;
+ (id)everyoneIcon;
+ (id)groupIcon;
+ (id)userIcon;
+ (id)ownerIcon;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)swapAltNameAndName;
- (int)type;
- (id)name;
- (void)mergeAccessControlInfo:(const struct TAccessControlInfo *)arg1;
- (void)setAccessControlInfo:(const struct TAccessControlInfo *)arg1;
- (const struct TAccessControlInfo *)accessControlInfo;
- (id)icon;
- (int)posixID;
- (struct __CFUUID *)uuidRef;
- (void)setIdentity:(const struct TIdentity *)arg1;
- (const struct TIdentity *)identity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentity:(const struct TIdentity *)arg1 accessControlInfo:(const struct TAccessControlInfo *)arg2 isOwner:(_Bool)arg3;

@end

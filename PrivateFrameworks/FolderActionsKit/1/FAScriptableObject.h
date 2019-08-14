//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FolderActionsKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface FAScriptableObject : NSObject <NSSecureCoding>
{
    BOOL _objectSpecifierUsesNameBeforeID;
    NSString *_name;
    unsigned long long _index;
    NSUUID *_id;
    id _container;
    NSString *_keyInContainer;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyInContainer;
@property(retain) NSString *keyInContainer; // @synthesize keyInContainer=_keyInContainer;
@property __weak id container; // @synthesize container=_container;
@property BOOL objectSpecifierUsesNameBeforeID; // @synthesize objectSpecifierUsesNameBeforeID=_objectSpecifierUsesNameBeforeID;
@property(retain) NSUUID *id; // @synthesize id=_id;
@property unsigned long long index; // @synthesize index=_index;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resetContainmentProperties;
- (id)objectSpecifier;
- (id)init;

@end

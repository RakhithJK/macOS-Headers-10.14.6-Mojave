//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemMigration/NSCopying-Protocol.h>
#import <SystemMigration/NSSecureCoding-Protocol.h>

@class NSDictionary, NSImage, NSMutableArray, NSNumber, NSString;

@interface SMWindowsComponent : NSObject <NSSecureCoding, NSCopying>
{
    BOOL isContainer;
    NSNumber *identifier;
    long long type;
    NSString *name;
    NSNumber *size;
    NSImage *image;
    NSDictionary *attributes;
    NSMutableArray *subcomponents;
    NSString *localizedDescription;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringFromComponentType:(long long)arg1;
+ (long long)componentTypeFromString:(id)arg1;
+ (id)profileWithDictionary:(id)arg1;
@property BOOL isContainer; // @synthesize isContainer;
@property(retain) NSMutableArray *subcomponents; // @synthesize subcomponents;
@property(readonly, retain) NSDictionary *attributes; // @synthesize attributes;
@property(retain) NSNumber *size; // @synthesize size;
@property(readonly, retain) NSString *name; // @synthesize name;
@property(readonly) long long type; // @synthesize type;
@property(readonly, retain) NSNumber *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToXMComponent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)sanitizedDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationSanitized:(BOOL)arg1;
@property(readonly, retain) NSImage *image; // @synthesize image;
- (BOOL)sizeDeferred;
@property(readonly, retain) NSString *localizedDescription; // @synthesize localizedDescription;
- (id)description;
- (void)addSubcomponent:(id)arg1;
- (id)allSubcomponents;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 size:(id)arg4 image:(id)arg5 attributes:(id)arg6;

@end

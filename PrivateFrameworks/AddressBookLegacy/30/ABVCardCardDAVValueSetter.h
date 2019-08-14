//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookLegacy/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter
{
    BOOL _recordIsGroup;
    BOOL _importingToExistingGroup;
}

+ (int)groupPropertyForPersonProperty:(int)arg1;
+ (struct __CFDictionary *)_personToGroupPropertyMap;
@property BOOL recordIsGroup; // @synthesize recordIsGroup=_recordIsGroup;
- (id)imageData;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (id)initWithGroup:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithPerson:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (void)_drainExistingProperties;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void *)valueForProperty:(unsigned int)arg1;
- (void *)copyParsedRecordWithSource:(void *)arg1 outRecordType:(unsigned int *)arg2;
- (BOOL)propertyIsValidForPerson:(unsigned int)arg1;

@end


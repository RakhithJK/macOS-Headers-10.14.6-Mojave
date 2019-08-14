//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer
{
    NSString *_maxResourceSize;
    NSString *_maxImageSize;
    NSURL *_meCardURL;
}

+ (id)copyPropertyMappingsForParser;
@property(retain, nonatomic) NSURL *meCardURL; // @synthesize meCardURL=_meCardURL;
@property(retain, nonatomic) NSString *maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) NSString *maxResourceSize; // @synthesize maxResourceSize=_maxResourceSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSharedAddressBook;
@property(readonly, nonatomic) BOOL isSearchAddressBook;
@property(readonly, nonatomic) BOOL isAddressBook;
- (void)applyParsedProperties:(id)arg1;
- (id)description;

@end


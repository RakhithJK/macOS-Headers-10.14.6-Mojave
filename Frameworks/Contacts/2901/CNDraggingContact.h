//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject
{
    CNContact *_contact;
    CNContactStore *_contactStore;
    NSURL *_cachedFileURLRepresentation;
}

+ (id)availableDataRepresentationTypes;
@property(retain, nonatomic) NSURL *cachedFileURLRepresentation; // @synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)dataRepresentationForType:(id)arg1;
- (void)cleanupFileURLRepresentation;
- (id)fileURLRepresentation;
- (id)fileNameForContact:(id)arg1;
- (id)serializeContactToVCard:(id)arg1;
- (id)fetchContactWithKeys:(id)arg1;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;

@end


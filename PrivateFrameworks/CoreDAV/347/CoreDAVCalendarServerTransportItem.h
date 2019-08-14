//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem
{
    CoreDAVLeafItem *_apsBundleID;
    CoreDAVLeafItem *_courierServer;
    CoreDAVItemWithHrefChildItem *_subscriptionURL;
    CoreDAVItemWithHrefChildItem *_tokenURL;
    CoreDAVLeafItem *_apsEnv;
    CoreDAVLeafItem *_refreshInterval;
    CoreDAVLeafItem *_xmppServer;
    CoreDAVLeafItem *_xmppURI;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *xmppURI; // @synthesize xmppURI=_xmppURI;
@property(retain, nonatomic) CoreDAVLeafItem *xmppServer; // @synthesize xmppServer=_xmppServer;
@property(retain, nonatomic) CoreDAVLeafItem *refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) CoreDAVLeafItem *apsEnv; // @synthesize apsEnv=_apsEnv;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *tokenURL; // @synthesize tokenURL=_tokenURL;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *subscriptionURL; // @synthesize subscriptionURL=_subscriptionURL;
@property(retain, nonatomic) CoreDAVLeafItem *courierServer; // @synthesize courierServer=_courierServer;
@property(retain, nonatomic) CoreDAVLeafItem *apsBundleID; // @synthesize apsBundleID=_apsBundleID;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end


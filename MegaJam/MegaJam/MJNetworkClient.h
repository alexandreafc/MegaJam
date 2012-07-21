//
//  MJNetworkClient.h
//  MegaJam
//
//  Created by Alex Belliotti on 7/20/12.
//  Copyright (c) 2012 CrowdComapss. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AsyncUdpSocket.h"

typedef enum {
    MJNetworkStatusDisconnected,
    MJNetworkStatusSeeking,
    MJNetworStatusConnecting,
    MJNetworkStatusConnected
} MJNetworkStatus;

@interface MJNetworkClient : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, AsyncUdpSocketDelegate>

@property (nonatomic, assign) MJNetworkStatus status;

@property (nonatomic, strong) NSNetServiceBrowser *bonjourBrowser;

@property (nonatomic, strong) AsyncUdpSocket *socket;

- (void)findMegaJams;
- (void)sendData:(NSData *)data;

@end
